#pragma once
#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <iostream>
using namespace std;
/*
Write a recursive linear search function with a
recursive step that finds the last occurrence of
a target in a vector, not the first.You will need
to modify the linear search function 
*/


template <typename T>
int last_occurance(vector<T>& vec, T& target, size_t pos_last = -1) {
    if (pos_last == -1) {
        pos_last = vec.size() - 1; // initialzing pos_last to the last index of the vector
    }
    if (pos_last == vec.size()) {
        cout << "Error: pos_last is out of bounds." << endl;
        return -1;
    }
    if (target == vec[pos_last]) {
        cout << "The target " << target << " last occurance is at position " << pos_last << endl;
        return pos_last;
    }
    else
        return last_occurance(vec, target, pos_last - 1);
}


#endif