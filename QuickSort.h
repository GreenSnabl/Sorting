/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QuickSort.h
 * Author: den
 *
 * Created on June 11, 2018, 10:25 AM
 */

#ifndef QUICKSORT_H
#define QUICKSORT_H

void swap (int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high -1; ++j)
    {
        if (arr[j] <= pivot)
        {
           ++i;
           swap(&arr[i], &arr[j]);
        }
    }
    swap (&arr[i+1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

#endif /* QUICKSORT_H */

