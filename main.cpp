/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snbl
 *
 * Created on May 25, 2018, 12:02 PM
 */

#include <cstdlib>
#include "MergeSort.h"
#include "HeapSort.h"
#include <iostream>

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {

    int* arr2 = new int[12];
    int arr[] = {1, 5, 4 ,3 ,6, 134, 2, 78, 7, 9, 45, 42};
    
    for (int i = 0; i < 12; ++i)
        arr2[i] = arr[i];
    
    heapsort(arr2, 12);
    
    //mergeSort(arr, 0, 11);
    
    for (int i = 0; i < 12; ++i)
        cout << arr2[i] << endl;
    
    return 0;
}

