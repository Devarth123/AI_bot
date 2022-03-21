//
// Created by devarth on 3/19/2022.
//

#ifndef NP_DOT___NP_DOT_H
#define NP_DOT___NP_DOT_H

#include "stdio.h"

int dotProduct(int vect_A[], int vect_B[]) {
    int n = (sizeof(vect_B) / sizeof(int));
    int product = 0;

    // Loop for calculate cot product
    for (int i = 0; i < n; i++)

        product = product + vect_A[i] * vect_B[i];
    printf("%i", product);
}

#endif //NP_DOT___NP_DOT_H
