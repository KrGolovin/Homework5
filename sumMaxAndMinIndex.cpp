//
// Created by Macbook Pro on 15/10/2019.
//
#include "sumMaxAndMinIndex.h"
#include "expressions.h"
int sumMaxAndMinIndex(const int* array, int length) { // const int *
    if (length < 2) {
        throw FEW_ELEMENT;
    }
    int maxIndex = 0; // индекс наибольшего элемента
    int minIndex = 0; // индекс наименьшего элемента
    for (int i = 1; i < length; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        } else if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return maxIndex + minIndex;
}