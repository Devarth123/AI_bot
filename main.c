#include "np_dot().h"
#include "function.h"



int main() {
    int empty[4];
    int arr[] = {3, 5};
    int arr1[] = {2, 1};
    dotProduct(arr1, arr);
    RelU(arr1, empty);
    return 0;
}