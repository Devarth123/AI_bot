#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <cstdio>
#include <iostream>

void spliter(char str_split_arr[][10], char *string_101, char *del) {
    int count = 0;
    str_split_arr[count][10] = strtok(*string_101, del);

    while (str_split_arr[count][10] != NULL) {
        count++;
        str_split_arr[count][10] = strtok(NULL, del);
    }
}
int main(){
  int i =0;
  float ik=0.2f;//this the const multiplier
  float input_const=0.2f;//the const
  char prompt [80];
  float arr[40];
  char str_split_arr[10][10] = {"NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL"};
  char catcth[] = "hello";
  const char* output[10] = {"hello", "i", "am", "thanks", "!", "Blue", "The", "almighty", "Creators", "good"};
  system("clear");//try changing this "cls" if you get a error.
  std::cout<<"lets see if i am smart"<<'\n';
  for(int i=0; i<=10; i++){
	if (strcmp(str_split_arr[i], "hello")==0){
		arr[i]==ik*input_const;
	}
	fgets(prompt, 80, stdin);
	spliter(str_split_arr, prompt, " ");
	for(int i=0; i<=9; i++){
		std::cout<<arr[i]<<'['+output[i]+']'<<'\n';
   	}
  }
}
