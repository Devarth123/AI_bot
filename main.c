#include "main.h"

float layer_dense(input_points, neurons){

    int weight = 0.10 * count(input_points, neurons);
    int biases = zeros(neurons);
    float arr ={weight, biases};
    return arr;
}

int main() {
    int empty[4];
    int arr[] = {3, 5};
    int arr1[] = {2, 1};
    int n = sizeof(arr) / sizeof(int);
    dotProduct(arr1, arr, n);
    return 0;
    
}