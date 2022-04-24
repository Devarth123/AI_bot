#include <main.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>


const double E = 2.7182845905;
int dotProduct(int vect_A[],int vect_B[],int n) {
    int product = 0;

    // Loop for calculate cot product
    for (int i = 0; i < n; i++) {
        product += vect_A[i] * vect_B[i];
    }
    return product;

    //Yes this was copied from stack overflow.
}
int forward(int input[], int sizeof_input){
    int a[sizeof_input];
    int output=dotProduct(a, input, sizeof_input);
    return output;
}


int expotential_arr(int arr[], int sizeof_arr){
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
    return output;
}
int RelU(int inputs[], int output[],int sizeof_first_arr) {

    for (int i = 0; i <=sizeof_first_arr; i++) {
        int j = inputs[i];
        //output must be an empty array
        output[i] = max(i,  j);
        printf("%i", output[i]);
    }
}
void zeros(std::vector<int>& N, int n){
    for(int i =0;i<n; i++){
        N.push_back(0);
    }
}




void dient_descent(float& feature[], std::vector<float>& weigths[], float& target, float& learning_rate, int* prediction=0, float& bias){
    bias = bias + learning_rate*(target-prediction); 
    for(int i=0;i<weigths.size(); i++){
       weigths[i] = weigths[i] + learning_rate*(target-prediction)*weigths[i];

    }    
}
