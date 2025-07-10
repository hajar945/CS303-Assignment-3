// CS303 Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Q1. (13 points) Implement the Queue data structure (you can use linked list or circular array
for implementation) with push(), pop(), front(), size() and empty() functions. The queue should
be a template class (should work with any data type). Perform the following operations:

a) Instantiate the queue with integers and push 10 values into the queue

b) Display all the elements in a queue using just the queue functions mentioned above
(push, pop, front, size etc.)

c) Write a new queue function called move_to_rear that moves the element currently at
the front of the queue to the rear of the queue. The element that was second in line will
be the new front element. Do this using functions push, front, and pop.*/

#include <iostream>

#include "Queue.h"
#include "Queue_Functions.h"

using namespace std;





int main()
{
    cout << "------------ START OF PROGRAM ------------ \n";
    Queue<char> q;
	
	cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;


    q.push('B');
	q.push('C');
	q.push('D');

	cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

        

}
