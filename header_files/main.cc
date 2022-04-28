//this code is broken ik 
#include <math.h>
#include "main.h"
#include <vector>
template<typename T>



//implemented this myself cuz algorithm lib is too_big==too_slow.

int max(int i, int ik){
    return (i>ik)?i:ik;
}
const double E = 2.7182845905;
//vectros used here cuz they are dynamic and easy to use.
void dotProduct(std::vector<T>& vect_A,std::vector<T>& vect_B,float& product) {
    for (int i = 0; i < vect_A.size(); i++) {
         product+= vect_A[i] * vect_B[i];
    }
  //note: the element number shud be the same for both the vectors 
}
//alert!!! this code is only valid for 1 dimensional vectors 
float forward(std::vector<T>& weights, std::vector<T>& bias){
    float product; dotProduct(inputs, weigths, product);
    for(T x: bias){
        product += x;
    }
    return product;
} 
void expotential_arr(std::vector<T>& arr, int& output){

   for(int i=0; i<arr.size();i++){
       output+=pow(E, arr[i]);
   }
}
void softmax(std::vector<T>& arr){
    for(int i=0; i<arr.size(); i++){
        double temp = expotential_arr(arr, sizeof_arr);
        arr[i]=pow(E, arr[i])/temp;
    }
}
void RelU(std::vector<T>& inputs,std::vector<T>& output) {
    for (int i = 0; i <inputs.size(); i++) {
        output[i] = max(0,  inputs[i]);
    }
}
void zeros(std::vector<T>& N, int& i){
    N.reserve(i);
    for(int i =0;i<i+1; i++){
        N.emplace_back(0);
    }
}
void dient_descent(std::vector<float>& feature, std::vector<float>& weigths, float& target, float& learning_rate, int* prediction=0, float& bias){
    bias = bias + learning_rate*(target-prediction);/*prediction in some cases can be zero and direct & like that so will have to use pointers*/ 
    for(int i=0;i<weigths.size(); i++){
       weigths[i] = weigths[i] + learning_rate*(target-prediction)*weigths[i];

        }    

    }
