#include "dll.h"


struct doubly_linked_list * create_list() {
    struct doubly_linked_list * list = (struct doubly_linked_list *)malloc(sizeof(struct singly_linked_list));
    list->start = NULL;

    return list;
}

void destroy_list(struct singly_linked_list * list) {
    if (list->start == NULL) {
        return;
    }

    struct list_node * node = list->start;
    struct list_node * next = NULL;
    while (node != NULL) {
        next = node->next;
        destroy_node(node);
        node = next;
    }

    free(list);
    return;
}

void add_node(struct singly_linked_list * list, struct list_node * node) {
    if (list->start == NULL) {
        list->start = node;
        return;
    }

    struct list_node * tmp = list->start;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }

    /* We are at the end of the list */
    tmp->next = node;

    return;
}

void remove_node(struct singly_linked_list * list, struct list_node * node) {
    if (list->start == NULL) {
        return;
    }

    struct list_node *curr, *prev;
    curr = list->start;

    /* Remove first node */
    if (strcmp(curr->data, node->data) == 0) {
        destroy_node(curr);
        list->start = NULL;
        return;
    }

    prev = curr;
    curr = curr->next;

    while (curr->next != NULL) {
        if (strcmp(curr->data, node->data) == 0) {
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    destroy_node(curr);
    return;
}

int size_of_list(struct singly_linked_list * list) {
    struct list_node * node = list->start;
    int size = 0;

    if (node == NULL) {
        size = 0;
    } else if (node->next == NULL) {
        size = 1;
    } else {
        size = 1;
        while (node->next != NULL) {
            size++;
            node = node->next;
        }
    }

    return size;
}

void print_list(struct singly_linked_list * list) {
    if (list->start == NULL) {
        return;
    }

    struct list_node * node = list->start;
    while (node != NULL) {
        printf("%s --> ", node->data);
        node = node->next;
    }

    printf("END\n");

    return;
}


struct list_node * create_node(char * node_data) {
    struct list_node * node = (struct list_node *)malloc(sizeof(struct list_node));
    node->next = NULL;
    node->data = (char *)malloc(sizeof(char) * (strlen(node_data)+1));
    strcpy(node->data, node_data);
    node->data[strlen(node_data)] = '\0';
    return node;
}

void destroy_node(struct list_node * node) {
    if (node != NULL) {
        if (node->data != NULL) {
            free(node->data);
        }

        free(node);
    }

    return;
}
