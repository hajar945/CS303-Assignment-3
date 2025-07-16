#pragma once
#ifndef LIST_H
#define LIST_H
/*

 Q3. (7 points) Modify the source code for the 
insertion sort so that it can sort a list (linked 
list or you can also use queue) of integers (You 
can find the source code on lecture 10 slide 138).
*/

#include <list>
#include <iostream>
using namespace std;

void insertion_sort(list<int>& num) {
    auto j = num.begin();
    ++j; // OG: j = 1; --> advance to second element
	// no iniiialization of j because j is already assigned to the second element of the list
    for (; j != num.end(); ++j) { // OG: for (j = 1; j < num.size(); j++)
        int key = *j; // OG: key = num[j];
        bool insertionNeeded = false; // OG: insertionNeeded = false;

        auto i = num.begin(); // OG: i = j - 1 --> start from begin()

        // OG: for (i = j-1; i >= 0; i--)
        // loop from begin() up to j
        while (i != j) {
            if (key < *i) { // OG: if (key < num[i])
                insertionNeeded = true; // OG: insertionNeeded = true;
                break; // OG: break;
            }
            ++i; // OG: continue i-- loop (but here advancing forward)
        }

        if (insertionNeeded) { // OG: if (insertionNeeded)
            auto curr = j; // store current node (equivalent to using num[j])
            ++j; // advance j early since erase below invalidates curr

            num.insert(i, key); // OG: num[i + 1] = key; (insert key before i)

            num.erase(curr); // remove original curr (equivalent to shifting elements and inserting key)

            --j; // adjust j back to point to correct next node after erase/insert
        }
    }
    // Print the sorted list
    cout << "Sorted list: ";
    for (const int& val : num) {
        cout << val << " ";
    }
    cout << endl;
}

#endif