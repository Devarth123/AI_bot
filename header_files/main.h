#ifndef NP_DOT___MAIN_H
#define NP_DOT___MAIN_H
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>

int dotProduct(int vect_A[], int vect_B[], int n);
int forward(int input[], int sizeof_arr);
int expotential_arr(int arr[], int sizeof_arr);
int softmax(int arr[], int sizeof_arr);
int RelU(int input[], int output[], int sizeof_first_arr);
int zeros(int size_of);
void gradient_descent(float& feature[], float& weigths[], float& target, float& learning_rate, int* prediction, float& bias[]);
#endif //NP_DOT___MAIN_H
