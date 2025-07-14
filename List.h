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
// Definition for singly-linked list.

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


ListNode* insertion_sort(ListNode* head) {
    if (!head || !head->next)return head;
    ListNode* dummy = new ListNode(INT_MIN);
    while (head)
    {
        ListNode* curr = dummy, * prev = nullptr;
        while (curr && curr->val <= head->val)
        {
            prev = curr;
            curr = curr->next;
        }
        ListNode* next = head->next;
        prev->next = head;
        head->next = curr;
        head = next;
    }
    return dummy->next;
}

//Print function
void printlist(ListNode* head) {

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

#endif