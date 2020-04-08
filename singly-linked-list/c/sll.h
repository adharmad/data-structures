#ifndef __SLL_H
#define __SLL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct singly_linked_list {
    struct list_node * start;
};

struct list_node {
    char* data;
    struct list_node * next;
};

/* List crud operations */
struct singly_linked_list * create_list();
void destroy_list(struct singly_linked_list * list);
void add_node(struct singly_linked_list * list, struct list_node * node);
void remove_node(struct singly_linked_list * list, struct list_node * node);
int size_of_list(struct singly_linked_list * list);
void print_list(struct singly_linked_list * list);

/* Node operations */
struct list_node * create_node(char * node_data);
void destroy_node(struct list_node * node);

#endif
