#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/dsa/queue-linked-list-implementation/#
// Node class definition
template <typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node(T new_data);
};


// Queue class definition
template <typename T>
class Queue {
private:
    Node<T>* front;
    Node<T>* rear;
public:
    Queue(); // Default constructor

    // Empty function to check if the queue is empty
    bool isEmpty() const;

    // Push function to add an element to the queue
    void push(T new_data);

    // Pop function to remove an element from the queue
    void pop();

    // Front function to return the front element of the queue
    T getfront() const;

  

    // Iteratively count number of nodes in linked list
    int size() const; // https://www.geeksforgeeks.org/dsa/find-length-of-a-linked-list-iterative-and-recursive/



    void move_to_rear();

    // Function to print the current state of the queue
    void printQueue();
};

#include "Queue_Functions.h"

#endif