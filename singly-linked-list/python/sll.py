# Singly linked list

class SinglyLinkedList:
    def __init__(self):
        self.start = None

    def addItem(self, data):
        node = self.start
        newNode = Node(data)

        if node is None:
            self.start = newNode
        else:
            while node.next is not None:
                node = node.next

            node.next = newNode

    def removeItem(self, data):
        node = self.start
        prev = None

        while node.next is not None:
            if node.data == data:
                break

            prev = node
            node = node.next

        prev.next = node.next

    def __str__(self):
        node = self.start
        strLst = (node.data + " --> ")

        while node.next is not None:
            node = node.next
            strLst += (node.data + " --> ")

        strLst += " NULL"

        return strLst

    def size(self):
        size = 0
        if self.start is None:
            size = 0
        elif self.start.next is None:
            size = 1
        else:
            node = self.start
            size = 1
            while node.next is not None:
                node = node.next
                size += 1

        return size

class Node:
    def __init__(self, data=''):
        self.data = data
        self.next = None

