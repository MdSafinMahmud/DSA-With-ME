# . Implement Queue using Linked List

# Why important?

# Dynamic memory allocation বুঝবে
# Interview favorite

# Practice:

# createNode()
# enqueue()
# dequeue()


# solve
# node class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Queue:

    # Constructor
    def __init__(self):
        self.front = None
        self.rear = None

    def enqueue(self, value):

        new_node = Node(value)

        if self.rear is None:
            self.front = self.rear = new_node
            return

        self.rear.next = new_node
        self.rear = new_node

    def dequeue(self):

        if self.front is None:
            print("Queue is Empty.")
            return

        removed = self.front.data
        self.front = self.front.next

        if self.front is None:
            self.rear = None

        print(removed, "Deleted")

    def display(self):

        if self.front is None:
            print("Queue is Empty.")
            return

        temp = self.front

        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next

        print("None")


q = Queue()

q.enqueue(int(input("Enter Number")))
q.enqueue(int(input("Enter Number")))
q.enqueue(int(input("Enter Number")))
q.enqueue(int(input("Enter Number")))
q.enqueue(int(input("Enter Number")))
q.enqueue(int(input("Enter Number")))
q.enqueue(int(input("Enter Number")))

q.display()
