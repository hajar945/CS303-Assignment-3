// CS303 Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*


*/
#include <iostream>
#include <vector>
#include "Queue.h"
#include "Queue_Functions.h"
#include "Vector.h"
#include "List.h"
using namespace std;




int main()
{
	cout << "------------ START OF PROGRAM ------------ \n";
	Queue<int> q;

	cout << "\nIs queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
	cout << "The size of the queue is " << q.size() << endl;
	q.push(1);

	cout << "After pushing, the queue is: "; q.print_queue();
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
	cout << "The queue is: "; q.print_queue();

	cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

	q.pop();
	cout << "After popping, the queue is: "; q.print_queue();

	cout << "\nThe front is " << q.getfront() << endl;
	cout << "The size of the queue is " << q.size() << endl;
	cout << "\n\n------------ MOVE TO REAR -------------------\n\n";
	q.move_to_rear();
	cout << "MOVE TO REAR QUEUE IS NOW\n";
	q.print_queue();


	cout << "\n\n\n---- new printing queue ----\n";
	q.print_queue();




	cout << "\n\n\n========== VECTOR SEARCH ===========\n";
	vector<string> vec = { "bus", "plane", "bus", "taxi", "bike", "plane" };
	string target = "bus";
	int result = last_occurance(vec, target);

	cout << "\n\n\n~~~~~~~~~~~~ LINKED LIST INSERTION SORT ~~~~~~~~~~~~\n";



}