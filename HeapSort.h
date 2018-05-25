/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HeapSort.h
 * Author: snbl
 *
 * Created on May 25, 2018, 5:28 PM
 */


/*
 *      MAX HEAP
 * index          0    1    2    3    4    5    6    7    8    9
 * 
 * array arr = | 12 |  5 |  3 |  7 |  2 |  1 |  9 |  8 |  6 |  4 | 
 *              Root   L    R   LL   LR   RL   RR   LLL  LLR  RLL
 * 
 *  
 * 
 *  Für Knoten i gilt:
 * 
 *      Parent(i)
 *              return arr[i - 1 / 2]
 * 
 *      Left(i)
 *              return arr[2 * i + 1]
 * 
 *      Right(i)
 *              return arr[2 * i + 2]
 * 
 */




#ifndef HEAPSORT_H
#define HEAPSORT_H


int left(int i) 
{
    return i * 2 + 1;
}

int right (int i)
{
    return i * 2 + 2;
}


void swap(int* arr, int firstIndex, int secondIndex)
{
    int tmp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = tmp;
}


void max_heapify(int* arr, int i, int size)
{
    int index, l, r;
    
    while (i < size) {
    
        index = i;
        l = left(i);
        r = right(i);
        
    if ((l < size) && (arr[l] > arr[index])) {
        index = l;
    }
        
    if ((r < size) && (arr[r] > arr[index])) {
        index = r;
    }
        
    if (index == i) {
        return;
    }
        swap(arr, i, index);
        i = index;
    }
}


void build_max_heap(int* arr, int size)
{
    for (int i = (size / 2) - 1; i >= 0; i--)
        max_heapify(arr, i, size);
}

void heapsort(int* arr, int size)
{
    build_max_heap(arr, size);
    for (int i = size - 1; i > 0; i--)
    {
        swap(arr, 0, i);
        max_heapify(arr, 0, i);
    }
}

#endif /* HEAPSORT_H */

