// CS303 Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Q1. (13 points) Implement the Queue data structure (you can use linked list or circular array
for implementation) with x push(), x pop(), x front(), x size() and x empty() functions. The queue should
be a template class (should work with any data type). Perform the following operations:

x a) Instantiate the queue with integers and push 10 values into the queue

(?) b) Display all the elements in a queue using just the queue functions mentioned above
(push, pop, front, size etc.)

x c) Write a new queue function called move_to_rear that moves the element currently at
the front of the queue to the rear of the queue. The element that was second in line will
be the new front element. Do this using functions push, front, and pop.*/

#include <iostream>

#include "Queue.h"
#include "Queue_Functions.h"

using namespace std;





int main()
{
    cout << "------------ START OF PROGRAM ------------ \n";
    Queue<int> q;
	
	cout << "\nIs queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
	cout << "The size of the queue is " << q.size() << endl;
	q.push(1);
	cout << "The size of the queue is " << q.size() << endl;

	cout << "\nIs queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.push(9);
	q.push(10);

	cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

	q.pop();
	cout << "\nThe front is " << q.getfront() << endl;
	cout << "The size of the queue is " << q.size() << endl;
	cout << "\n\n------------ MOVE TO REAR -------------------\n\n";
	q.move_to_rear();


}
