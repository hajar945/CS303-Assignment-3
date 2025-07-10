#include <iostream>
using namespace std;

// Node class definition
template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T new_data) {
        data = new_data;
        next = nullptr;
    }
};


// Queue class definition
template <typename T>
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = nullptr;
    }

    // Empty function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Push function to add an element to the queue
    void push(T new_data) {
        Node* new_node = new Node(new_data);
        if (isEmpty()) {
            front = rear = new_node;
            printQueue();
            return;
        }
        rear->next = new_node;
        rear = new_node;
        printQueue();
    }

    // Pop function to remove an element from the queue
    void pop() {
        if (isEmpty()) {
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        delete temp;
        printQueue();
    }

    // Front function to return the front element of the queue
    void front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        } return front->data;
    }
    // Function to print the current state of the queue
    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        cout << "Current Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
