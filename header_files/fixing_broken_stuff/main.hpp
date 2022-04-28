#ifndef MAIN
#define MAIN
#include <vector>
//sadly this lib is only valid for arrays not matrix and more fancy things like tensor

namespace ai{
     const double E = 2.7182845905;
     int pow(int& i, int& num);
     int max(int& i, int& num);
     float dotProduct(std::vector<float>& vect_A,std::vector<float>& vect_B, int& product);
     void expotential_arr(std::vector<int>& arr, int& output);
     void softmax(std::vector<int>& arr);
     void RelU(std::vector<int>& inputs,std::vector<int>& output);
     void dient_descent(std::vector<float>& feature, std::vector<float>& weigths, float& target, float& learning_rate, int* prediction, float& bias);
     void forward(std::vector<float>&, std::vector<float>&, int& bias);  

}

#endif
