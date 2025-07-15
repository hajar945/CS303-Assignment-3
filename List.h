#pragma once
#ifndef LIST_H
#define LIST_H


/* Q3. (7 points) Modify the source code for the 
insertion sort so that it can sort a list (linked 
list or you can also use queue) of integers (You 
can find the source code on lecture 10 slide 138).

void insertion_sort(vector <int> &num) {
int i, j, key;
bool insertionNeeded = false;
for (j = 1; j < num.size(); j++) {
key = num[j];
insertionNeeded = false;
for (i = j - 1; i >= 0; i--){
if (key < num[i]) {
num[i + 1] = num[i]; // larger values move right
insertionNeeded = true;
}
else
break;
}
if (insertionNeeded)
num[i + 1] = key; //Put key into its proper location
}
}

*/


#include <vector>
#include <iostream>
using namespace std;


// https://www.geeksforgeeks.org/dsa/cpp-program-for-insertion-sort-in-a-singly-linked-list/#


#endif