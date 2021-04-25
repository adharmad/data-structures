#ifndef __DLL_H
#define __DLL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct doubly_linked_list {
    struct list_node * head;
};

struct list_node {
    char* data;
    struct list_node * next;
    struct list_node * prev;
};


#endif
