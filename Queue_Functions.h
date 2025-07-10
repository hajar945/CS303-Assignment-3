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

// Empty function to check if the queue is empty
template <typename T>
bool Queue<T>::isEmpty() const {
    return front == nullptr;
}

// Push function to add an element to the queue
template <typename T>
void Queue<T>::push(T new_data) {
    Node<T>* new_node = new Node<T>(new_data);
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
template <typename T>
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
// Front function to return the front element of the queue
template <typename T>
T Queue<T>::getfront() const {
    if (isEmpty()) {
            cout << "\nQueue is empty" << endl;
            return 0;
        } 
    return front->data;
}


    template <typename T>
    // Itervatively count number of nodes in linked list
    int Queue<T>::size() const { // https://www.geeksforgeeks.org/dsa/find-length-of-a-linked-list-iterative-and-recursive/
        
        // Initialize num_items with 0
        int num_items = 0;

        // Initialize curr with head of Linked List
        Node<T>* curr = front;

        // Traverse till we reach nullptr
        while (curr != nullptr) {

            // Increment count by 1
            num_items++;

            // Move pointer to next node
            curr = curr->next;
        }

        // Return the count of nodes
        return num_items;
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