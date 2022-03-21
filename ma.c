#include <stdio.h>

int sum(int a, int b) {
    return (a + b);
}

int np_dot(int arr1[], int arr2[]) {

    int empty[sizeof(arr1) / sizeof(int)] = {}, output, l;
    for (int i = 0; i < (sizeof(arr1) / sizeof(int) - 1); ++i) {
        empty[i] = (arr1[i] * arr2[i]);
    }
//    for (int i = 0; i < (sizeof(empty) / sizeof(int) - 1); ++i) {
//
//        if (i == 0) {
//            output += sum(empty[i], empty[i + 1]);
//        } else {
//            output += sum(empty[i + 1], empty[i + 2]);
//        }
//
//    }
    printf("%i", empty);
}

int main() {
    int arr[] = {3, 5};
    int arr1[] = {2, 1};
    np_dot(arr1, arr);
    return 0;
}