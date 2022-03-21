//
// Created by devarth on 3/19/2022.

#ifndef NP_DOT___FUNCTION_H
#define NP_DOT___FUNCTION_H
//bunch of usefull funcs!

#include "math.h"
#include "stdio.h"
#include "np_dot().h"

const E = 2.7182845905;

int count(first, second) {
    for (int i = first; i < (second + 1); ++i) {
        return i;
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

int arr_len(int arr[], char operation) {

    if (operation == "-") {
        return (sizeof(arr) / sizeof(int) - 1);
    } else {
        return (sizeof(arr) / sizeof(int));
    }
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

int RelU(int inputs[], int output[]) {

    for (int i = 0; i < (sizeof(inputs) / sizeof(int) - 1); ++i) {
        int j = inputs[i];
        //output must be an empty array
        output[i] = max(i, j);
        printf("%i", output[i]);
    }
}

int expotential(int output, int input, int len) {
    int outputOffunc[len];

    for (int i = 0; i < sizeof(output) / sizeof(int); ++i) {

        outputOffunc[i] = pow(E, input);
    }
    int normal_base = arr_calculation(outputOffunc, "+");
    int norm_value[len];
    for (int i = 0; i < arr_len(outputOffunc, "+"); ++i) {
        norm_value[i] = outputOffunc[i] / normal_base;
    }

//    return outputOffunc;
    return norm_value;
}
//nice
#endif //NP_DOT___FUNCTION_H
