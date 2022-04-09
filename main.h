//
// Created by devar on 4/2/2022.
//

#ifndef NP_DOT___MAIN_H
#define NP_DOT___MAIN_H
#include <math.h>
#include <stdio.h>
#include <string.h>
const E = 2.7182845905;

int index(int array[], int index, len_of_arr) {
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

int arr_max(int arr[], len_of_arr) {
    int max;
    for (int i = 0; i <=len_of_arr; ++arr) {
        if (arr[i > max]) {
            max = arr[i];
        }
    }
}
int dotProduct(vect_A[], vect_B[], n) {
    int product = 0;

    // Loop for calculate cot product
    for (int i = 0; i < n; i++) {

        product = product + vect_A[i] * vect_B[i];
    }
    return product;

    //Yes this was copied from stack overflow.
}
int count(first, second) {
    for (int i = first; i < (second + 1); ++i) {
        return i;
    }
}
int expotential_stuff(int arr[], len_of_arr) {
    int output;
    for (int i = 0; i <=len_of_arr; ++i) {
        output += pow(E, arr[i]);
    }
    return output;
}
int zeros(len) {
    int arr[len];
    return arr;
}
//int layer_dense(input_points, neurons, float arr){
//    int weight=0.10*count(input_points, N_neurons);
//    int biases = zeros(N_neurons);
//    float arr[2]={weight, biases};
//    return arr;
//}
//float layer_dense(input_points, neurons){
//    int weight = 0.10 * count(input_points, neurons);
//    int biases = zeros(neurons);
//    float arr[2]={weight, biases};
//}
int forward(input, sizeof_input){
    int a[sizeof_input];
    int output=dotProduct(a, input, sizeof_input);
    return output;
}
int softmax(arr[], sizeof_arr){
    int out_arr[sizeof_arr];
    for (int i = 0; i <=sizeof_arr; i++)
    {
        out_arr[i] = expotential_stuff(arr, sizeof_arr)/pow(E, arr[i]);
    }
    return out_arr;
}
int RelU(int inputs[], int output[], sizeof_first_arr) {

    for (int i = 0; i <=sizeof_first_arr; i++) {
        int j = inputs[i];
        //output must be an empty array
        output[i] = max(i,  j);
        printf("%i", output[i]);
    }
}




#endif //NP_DOT___MAIN_H
