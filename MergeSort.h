/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MergeSort.h
 * Author: snbl
 *
 * Created on May 25, 2018, 12:02 PM
 */

#ifndef MERGESORT_H
#define MERGESORT_H

void merge(int* arr, int low, int mid, int high)
{
    int i,j,k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int arrL[n1];
    int arrR[n2];
    
    for (i = 0; i < n1; ++i)
        arrL[i] = arr[low + i];
    for (j = 0; j < n2; ++j)
        arrR[j] = arr[mid + j + 1];
    
    i = 0;
    j = 0;
    k = low;
    
    while (i < n1 && j < n2)
    {
        if (arrL[i] <= arrR[j])
        {
            arr[k] = arrL[i];
            ++i;
        }
        else 
        {
            arr[k] = arrR[j];
            ++j;
        }
        ++k;
    }
    while (i < n1)
    {
        arr[k] = arrL[i];
        ++i;
        ++k;
    }
    while (j < n2)
    {
        arr[k] = arrR[j];
        ++j;
        ++k;
    }
}

void mergeSort(int* arr, int l, int r)
{                                                     // cmp r, l
    if (l < r)                                        // bgt recurse      
    {
        int m = l + (r - l) / 2;
        
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

#endif /* MERGESORT_H */

