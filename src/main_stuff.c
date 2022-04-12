#include <stdio.h>
#include </home/dev/Desktop/code/AI_bot/header_files/main.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void spliter(char *str_split_arr[], char *string, char *del) {
    int count = 0;
    str_split_arr[count] = strtok(string, del);

    while (str_split_arr[count] != NULL) {
        count++;
        str_split_arr[count] = strtok(NULL, del);
    }
}

int main() {
    int i = 0;
    int ik=2//this is the const multiplier      
    int  input_const =2; //this a const (atleast for now) 
    char prompt[80];                                                
    float arr[40]; //this where the inputs get's stored             
    char *str_split_arr[10] = {"NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL", "NULL"};
    char catcth[] = "hello";  
    char* output[10] = {"hello", "i", "am", "thanks", "!", "Blue", "The", "almighty", "Creators", "good"};
    system("clear");
    printf("lets seee if i am smart\n");
    for (int i = 0; i < 10; i++) {
  
        if (strcmp(str_split_arr[i], "hello") == 0) {
            arr[i] = (input_const*ik)/(100);
        }                                             
    }                                                 
        fgets(prompt, 80, stdin);                     
        spliter(str_split_arr, prompt, " ");          
    for(int i=0; i<=9; i++){                          
    printf("%f[%s]\n", arr[i], output[i]);            
   }                                                  
    return 0;                                         
}                                                     
