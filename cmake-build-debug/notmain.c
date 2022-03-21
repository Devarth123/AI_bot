#include <stdio.h>

int np_dot(int arr1[], int arr2[]) {
    int vecSize= sizeof(arr1)/sizeof(arr1[0]); //we presume that #arr1 = #arr2
    int out= 0;
    for(int i= 0; i<vecSize; i++)
        out+= arr1[i]*arr2[i];

    return out;
}

int main() {
    int arr[] = {3, 5};
    int arr1[] = {2, 1};
    int dotProd= np_dot(arr1, arr);
    printf("%d", dotProd);
    return 0;
}