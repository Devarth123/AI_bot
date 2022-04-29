#include <iostream>
#include <vector>
#include <string>

bool is_chars_same(char ch1,char ch2 ){
  return (ch1==ch2)?1:0;
}
bool is_strs_same(std::string s1, std::string s2){
  bool return_;
  return = (s1==s2) ? true:false;
  return return_;
}


void display(std::vector<std::string> dis){
  for(int i=0; i<dis.size(); i++){
    std::cout<<dis[i]<<'\t';
  }                       
}                         
std::vector<std::string> split(std::string& s)
{
  std::string temp;
  std::vector<std::string> tken;
  tken.reserve((sizeof(s)/sizeof(std::string)));
  //do the actual splitting work, add each token to our vector with emplace_back
  for(auto x: s){                                    
    if(is_chars_same(x, ' ')==1){                                      
    tken.emplace_back(temp);                         
    temp = "";                                       
    }else{                                           
     temp+=x;                             
    }                                     
  }                                       
  tken.emplace_back(temp);                
  return tken;                            
}                                 
int main(){
  std::vector<float> arr;
  float ik=0.2;
  float input_const= 0.2;
  std::string string_;
  std::string words[10] = {"hello", "i", "am", "thanks", "!", "Blue", "The", "almighty", "Creators", "good"};
  system("clear");
  std::cout<<"TEST"<<std::endl;
  getline(std::cin, string_);
  auto x = split(string_);
  for(int i=0; i<x.size(); i++){
    if(is_strs_same(x[i], "hello")==1){
      arr.push_back(ik*input_const);
    }else{
      arr.push_back(0);
    }
  }
  for(int i=0; i<x.size(); i++){
    std::cout<<x[i]<<std::endl;
  }
  std::cout<<arr[0]<<std::endl;
  return 0;
}


