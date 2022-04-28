#include "main.hpp"

namespace ai{
    int zero = 0; 
    int max(int& i,int num){
        return (i>num)?i : num;
    }
    float pow1(float num, float times){
        const int num2=num; 
        for(int i = 0; i<times-1;++i){
            num = num  *  num2; 
           }
        return num; // if u wish to make it faster make this a void and delete the return  statement
        }
    float dotProduct(std::vector<float>& vect_A,std::vector<float>& vect_B){
       float output;    
        for (int i = 0; i < vect_A.size(); i++) {
           output+= vect_A[i] * vect_B[i];
 
        }
        return output;
    }
   float expotential_arr(std::vector<int>& arr){
        float output; 
        for(float x: arr){
            output += pow1((float)E, x);
        }
        return output;
    }
    void softmax(std::vector<int>& arr){
       for(int i=0; i<arr.size(); ++i){
          float temp = expotential_arr(arr);
          arr[i]=pow1((float)E, arr[i])/temp;
      }
   }
   void zeros(std::vector<float>& N, int& i){
     N.reserve(i);
     for(int i =0;i<i; ++i){
        N.emplace_back(0);
     }
}
     //typecast ur vectors to this if ur getting error.
  void RelU(std::vector<float>& inputs){
      for(int i=0;i<inputs.size(); ++i){
          inputs[i] = max(zero, inputs[i]);
      }
  }
void forward(std::vector<float>& inputs, std::vector<float>& weigths, int& bias){
     //hey the ouput is gonna be the bias reason u may ask? ans::PERFORMANCE.
    bias = dotProduct(inputs, weigths) + bias;
  } 
//vectors are technically heap allocated so there shudent be a lot problems with that 

}   
