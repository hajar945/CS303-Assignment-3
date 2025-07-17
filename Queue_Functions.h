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
Queue<T>::Queue(const Queue<T>& other) { // Deep copy constructor
    front = rear = nullptr;
    Node<T>* curr = other.front;
    while (curr != nullptr) {
        Node<T>* new_node = new Node<T>(curr->data);
        if (rear == nullptr) { // queue is empty
            front = rear = new_node;
        }
        else {
            rear->next = new_node;
            rear = new_node;
        }
        curr = curr->next;
    }
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
        cout << endl << new_data << " has been pushed to the queue\n";

        return;
    }
    rear->next = new_node;
    rear = new_node;
    cout << endl << new_data << " has been pushed to the queue\n";


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

    Queue<T> tempQueue = *this; // Make a copy to print the queue without changing the original queue

    while (!tempQueue.isEmpty())
    {
        T frontcopy = tempQueue.getfront();
        num_items++;
        tempQueue.pop();
    }
    cout << endl;
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
        cout << "\nOnly one element in the queue, no need to move." << endl;
        return;
    }

    T frontData = getfront();
    pop();  // Remove the front element
    cout << "Front element = " << frontData << endl;
    push(frontData);  // Prepare to push it back to the rear



}




    template <typename T> // https://stackoverflow.com/questions/22280318/how-do-i-print-a-queue
    void Queue<T>::print_queue()
    {
        Queue<T> tempQueue = *this; // Make a copy to print the queue without changing the original queue

        while (!tempQueue.isEmpty())
        {
			T frontcopy = tempQueue.getfront();
            cout << frontcopy << " ";
            tempQueue.pop();
        }
        cout << endl;

    }


template <typename T> // https://stackoverflow.com/questions/22280318/how-do-i-print-a-queue
void Queue<T>::print_queue()
{
    Queue<T> tempQueue = *this; // Make a copy to print the queue without changing the original queue

    while (!tempQueue.isEmpty())
    {
        T frontcopy = tempQueue.getfront();
        cout << frontcopy << " ";
        tempQueue.pop();
    }
    cout << endl;

}



#endif