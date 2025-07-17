#pragma once
#ifndef LIST_H
#define LIST_H
/*

Modify the source code for the
insertion sort so that it can sort a list (linked
list or you can also use queue) of integers
*/

#include <list>
#include <iostream>
using namespace std;

void insertion_sort(list<int>& num) {
    auto j = num.begin();
    ++j; // equivalent to: j = 1; --> advance to second element
    // no iniiialization of j because j is already assigned to the second element of the list
    for (; j != num.end(); ++j) { // equivalent to: for (j = 1; j < num.size(); j++)
        int key = *j; // equivalent to: key = num[j];
        bool insertionNeeded = false; 

        auto i = num.begin(); // equivalent to: i = j - 1 --> start from begin()

        // equivalent to: for (i = j-1; i >= 0; i--)
        // loop from begin() up to j
        while (i != j) {
            if (key < *i) { // equivalent to: if (key < num[i])
                insertionNeeded = true; 
                break; 
            }
            ++i; // equivalent to: continue i-- loop (but here advancing forward)
        }

        if (insertionNeeded) { // equivalent to: if (insertionNeeded)
            auto curr = j; // store current node (equivalent to using num[j])
            ++j; // advance j early since erase below invalidates curr

            num.insert(i, key); // equivalent to: num[i + 1] = key; (insert key before i)

            num.erase(curr); // remove original curr (equivalent to shifting elements and inserting key)

            --j; // adjust j back to point to the correct next node after erase/insert
        }
    }
    // print the sorted list
    cout << "Sorted list: ";
    for (const int& val : num) {
        cout << val << " ";
    }
    cout << endl;
}

#endif