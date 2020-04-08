#ifndef __SLL_H
#define __SLL_H

#include <iostream>

using namespace std;

class SinglyLinkedList {
    private:
        Node* start;

    public:
        SinglyLinkedList();
        ~SinglyLinkedList();
        void addNode(Node* node);
        void removeNode(Node* node);
        int size();
};

class Node {
    private:
        Node* next;
        string data;

    public:
        Node();
        ~Node();
        string getData();
        void setData(string str);
        Node* getNext();
        void setNext(Node* nextNode);
};

#endif
