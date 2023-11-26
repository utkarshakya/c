// for question see questRecursion.txt file

#include <stdio.h>

int max(int a, int b){
    if(a<b) return b;
    else return a;
}

int maxInArray(int arr[], int m, int index){
    if(index == 0) return max(arr[0], m);
    m = max(arr[index], maxInArray(arr, m, index-1));
    return m;
}

int main(){
    int arr[] = {3,6,2,4,7,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = size-1;
    int m = arr[index];
    printf("The Maximum Number = %d", maxInArray(arr, m, index));
    return 0;
}