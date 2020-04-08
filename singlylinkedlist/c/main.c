#include <stdio.h>
#include "sll.h"

int main(int argc, char** argv) {
    struct singly_linked_list * sll = create_list();
    int size = size_of_list(sll);
    printf("Size of list = %d\n", size);
    
    struct list_node * node1 = create_node("Test1");
    struct list_node * node2 = create_node("Test2");

    add_node(sll, node1);
    add_node(sll, node2);
    print_list(sll);
    size = size_of_list(sll);
    printf("Size of list = %d\n", size);

    struct list_node * node3 = create_node("Test3");
    struct list_node * node4 = create_node("Test4");

    add_node(sll, node3);
    add_node(sll, node4);
    print_list(sll);
    size = size_of_list(sll);
    printf("Size of list = %d\n", size);

    remove_node(sll, node3);
    print_list(sll);
    size = size_of_list(sll);
    printf("Size of list = %d\n", size);

    destroy_list(sll); 

    return 0;
}
