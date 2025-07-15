#pragma once
#ifndef LIST_H
#define LIST_H
/*

 Q3. (7 points) Modify the source code for the 
insertion sort so that it can sort a list (linked 
list or you can also use queue) of integers (You 
can find the source code on lecture 10 slide 138).
*/

#include <queue>
#include <iostream>
using namespace std;

// Function to sort the queue in ascending order
void sort_queue_asc() {
	int i, j, temp;
	int n = back - front + 1; // Calculate the number of elements in the queue

	for (i = 0; i < n - 1; i++) { // Iterate through the queue elements
		for (j = i + 1; j < n; j++) { // Iterate through the remaining elements
			if (queue[i] > queue[j]) { // Compare adjacent elements
				temp = queue[i]; // Swap elements if out of order
				queue[i] = queue[j];
				queue[j] = temp;
			}
		}
	}
}


void insertion_sort(queue<int>& que) {
	int i, j, temp;
	bool insertionNeeded = false;
	for (j = 1; j < que.size(); j++) { // Iterate through the queue elements
		insertionNeeded = false;
		for (i = j - 1; i >= 0; i--) {
			if (temp < que[i]) {
				temp = que[j];
				que[i + 1] = que[i]; // larger values move right
				insertionNeeded = true;
			}
			else
				break;
		}
		if (insertionNeeded)
			que[i + 1] = temp; //Put temp into its proper location
	}
}
// https://www.geeksforgeeks.org/dsa/cpp-program-for-insertion-sort-in-a-singly-linked-list/#


#endif