# Driver for singly linked list

from sll import *

if __name__ == '__main__':
    lst = SinglyLinkedList()
    lst.addItem('hello')
    lst.addItem('world')
    lst.addItem('this')
    lst.addItem('is')
    lst.addItem('universe')

    print(lst)
    print(lst.size())

    lst.removeItem('is')

    print(lst)
    print(lst.size())
