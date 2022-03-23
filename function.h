//
// Created by devarth on 3/19/2022.

#ifndef NP_DOT___FUNCTION_H
#define NP_DOT___FUNCTION_H
//bunch of usefull funcs!

#include "math.h"
#include "stdio.h"
#include "np_dot().h"

int arr_len(int arr[], char operation) {

    if (operation == "-") {
        return (sizeof(arr) / sizeof(int) - 1);
    } else {
        return (sizeof(arr) / sizeof(int));
    }
}

const E = 2.7182845905;

int expotential_stuff(int arr[]) {
    int output;
    for (int i = 0; i < arr_len(arr, "+"); ++i) {
        output += pow(E, arr[i]);
    }
    return output;
}


int count(first, second) {
    for (int i = first; i < (second + 1); ++i) {
        return i;
    }
}

int index(int array[], int index) {
    int output;
    for (int i = 0; i < arr_len(array, "+"); ++i) {
        if (index == array[i]) {
            output = i;
        }
    }
    return output;
}

int arr_max(int arr[]) {
    int max;
    for (int i = 0; i < arr_len(arr, "+"); ++arr) {
        if (arr[i > max]) {
            max = arr[i];
        }
    }
}

int zeros(len) {
    int arr[len];
    return arr;
}

int layer_dense(n_input_points, n_neurons) {
    int weight = 0.10 * count(n_input_points, n_neurons);
    int biases = zeros(n_neurons);
    return biases, weight;
}

int forward(inputs) {
    int len = sizeof(inputs) / sizeof(int);
    int a[len];
    int output = dotProduct(a, inputs);
    return output;
}

int max(int i, int c) {
    if (i > c) {
        return i;
    } else {
        return c;
    }
}

int arr_calculation(int arr[], char type) {
    int return_value;
    if (type == "+") {
        for (int i = 0; i < arr_len(arr, "+"); ++i) {
            return_value += arr[i];
        }
    } else {
        for (int i = 0; i < arr_len(arr, "+"); ++i) {
            return_value -= arr[i];
        }
    }
}

int ArgMax(int arr[]) {
    int output[arr_len(arr, "+")];

}

int softmax(int arr[]) {
    int output_arr[arr_len(arr, "+")];
    for (int i = 0; i < arr_len(arr, "+"); ++i) {

        output_arr[i] = expotential_stuff(arr) / pow(E, arr[i]);

    }
    return output_arr;
}

int RelU(int inputs[], int output[]) {

    for (int i = 0; i < (sizeof(inputs) / sizeof(int) - 1); ++i) {
        int j = inputs[i];
        //output must be an empty array
        output[i] = max(i,  j);
        printf("%i", output[i]);
    }
}


//nice
#endif //NP_DOT___FUNCTION_H
