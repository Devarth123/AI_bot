//
// Created by devar on 4/2/2022.
//

#ifndef NP_DOT___MAIN_H
#define NP_DOT___MAIN_H
#include <math.h>
#include <stdio.h>
#include <string.h>
const E = 2.7182845905;

int index(int array[], int index,int len_of_arr) {
    int output;
    for (int i = 0; i <=len_of_arr; ++i) {
        if (index == array[i]) {
            output = i;
        }
    }
    return output;
}
int max(int i, int c) {
    if (i > c) {
        return i;
    } else {
        return c;
    }
}

int arr_max(int arr[], int len_of_arr) {
    int max;
    for (int i = 0; i <=len_of_arr; ++arr) {
        if (arr[i > max]) {
            max = arr[i];
        }
    }
}
int dotProduct(int vect_A[],int vect_B[],int n) {
    int product = 0;

    // Loop for calculate cot product
    for (int i = 0; i < n; i++) {

        product = product + vect_A[i] * vect_B[i];
    }
    return product;

    //Yes this was copied from stack overflow
}
int count(int first, int second) {
    for (int i = first; i < (second + 1); ++i) {
        return i;
    }
}
int expotential_stuff(int arr[],int len_of_arr) {
    int output;
    for (int i = 0; i <=len_of_arr; ++i) {
        output += pow(E, arr[i]);
    }
    return output;
}
int zeros(int len) {
    int arr[len];
    return arr;
}
int forward(int input, int sizeof_input){
    int a[sizeof_input];
    int output=dotProduct(a, input, sizeof_input);
    return output;
}


int expotential_arr(int arr, int sizeof_arr){
   int output=0;
   for(int i=0; i<=sizeof_arr;i++){
       output+=pow(E, arr[i]);
   }
}
int softmax(int arr[], int sizeof_arr){
    int output[sizeof_arr];
    for(int i=0; i<=sizeof_arr; i++){
        double temp = expotential_arr(arr, sizeof_arr);
        output[i]=pow(E, arr[i])/temp;
    }
}
int RelU(int inputs[], int output[],int sizeof_first_arr) {

    for (int i = 0; i <=sizeof_first_arr; i++) {
        int j = inputs[i];
        //output must be an empty array
        output[i] = max(i,  j);
        printf("%i", output[i]);
    }
}




#endif //NP_DOT___MAIN_H
