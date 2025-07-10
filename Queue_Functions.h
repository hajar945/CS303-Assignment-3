#pragma once
#ifndef QUEUE_FUNCTIONS_H
#define QUEUE_FUNCTIONS_H

#include "Queue.h"
#include <iostream>

using namespace std;


//https://www.geeksforgeeks.org/dsa/queue-linked-list-implementation/#

template <typename T>
Node <T>::Node(T new_data) {
        data = new_data;
        next = nullptr;
}

template <typename T>
Queue<T>::Queue() {  // Default constructor
        front = rear = nullptr;
}

    template <typename T>
    // Empty function to check if the queue is empty
    bool Queue<T>::isEmpty() {
        return front == nullptr;
    }

    template <typename T>
    // Push function to add an element to the queue
    void Queue<T>::push(T new_data) {
        Node<T>* new_node = new Node(new_data);
        if (isEmpty()) {
            front = rear = new_node;
            printQueue();
            return;
        }
        rear->next = new_node;
        rear = new_node;
        printQueue();
    }
    template <typename T>
    // Pop function to remove an element from the queue
    void Queue<T>::pop() {
        if (isEmpty()) {
            return;
        }
        Node<T>* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        delete temp;
        printQueue();
    }
    template <typename T>
    // Front function to return the front element of the queue
    void Queue<T>::getfront() {
        if (isEmpty()) {
            cout << "\nQueue is empty" << endl;
            return;
        } return front->data;
    }


    template <typename T>
    // Recursively count number of nodes in linked list
    int Queue<T>::size(Node<T>* front) { // https://www.geeksforgeeks.org/dsa/find-length-of-a-linked-list-iterative-and-recursive/

        // Base Case
        if (front == NULL) {
            return 0;
        }

        // Count this node plus the rest of the list
        return 1 + countNodes(front->next);
    }

    template <typename T>
    // Function to print the current state of the queue
    void Queue<T>::printQueue() {
        if (isEmpty()) {
            cout << "\nQueue is empty" << endl;
            return;
        }
        Node<T>* temp = front;
        cout << "\nCurrent Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }



#endif