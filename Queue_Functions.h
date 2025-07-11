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
        cout << "\nAfter pushing " << new_data << ", the queue is: ";
        printQueue();
        return;
    }
    rear->next = new_node;
    rear = new_node;
	cout << "\nAfter pushing " << new_data << ", the queue is: ";
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
    
    cout << "\nAfter popping " << temp->data << ", the queue is : ";
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
    void Queue<T>::move_to_rear() {
        if (isEmpty()) {
            cout << "\nQueue is empty, cannot move front to rear." << endl;
            return;
		}
        else if (front == rear) {
            cout << "\nzOnly one element in the queue, no need to move." << endl;
            return;
		}

        T frontData = getfront();
        pop();  // Remove the front element
		cout << "frontData = " << frontData << endl;
		push(frontData);  // Prepare to push it back to the rear
		//front = front->next;  // Move front to the next element
        
        cout << "MOVE TO REAR QUEUE IS NOW\n";
        printQueue();

    }


    template <typename T>
    // Function to print the current state of the queue
    void Queue<T>::printQueue() {
        if (isEmpty()) {
            cout << "\nQueue is empty" << endl;
            return;
        }
        Node<T>* temp = front;
       
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }



#endif