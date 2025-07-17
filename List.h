#pragma once
#ifndef LIST_H
#define LIST_H
/*

Modify the source code for the
insertion sort so that it can sort a list (linked 
*/

#include <list>
#include <iostream>
using namespace std;

void insertion_sort(list<int>& num) {
    auto j = num.begin();
	// no iniiialization of j because j is already assigned to the second element of the list


        // loop from begin() up to j
        while (i != j) {
            }
        }

            auto curr = j; // store current node (equivalent to using num[j])
            ++j; // advance j early since erase below invalidates curr


            num.erase(curr); // remove original curr (equivalent to shifting elements and inserting key)

        }
    }
    cout << "Sorted list: ";
    for (const int& val : num) {
        cout << val << " ";
    }
    cout << endl;
}

#endif