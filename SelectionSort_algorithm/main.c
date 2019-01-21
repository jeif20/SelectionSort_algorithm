//
//  main.c
//  SelectionSort_algorithm
//

#include <stdio.h>

void selectionSort(int A[],int size);
int i;

int main(){
    int A[5] = {6,4,12,9,2}; //elements have been placed in the array
    int size = 5; //total of 5 elements
    printf("Elements unsorted: \n");
    for(i=0;i<size;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    
    selectionSort(A,size);
    
    printf("Elements sorted: \n");
    for(i=0;i<size;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    
    return 0;
}

void selectionSort(int A[],int size){
    int j, iMin,temp;
    for(i=0;i<size-2;i++){
        iMin = i;
        for(j=i+1;j<size;j++){
            if(A[j]<A[iMin]){
                iMin = j;
            }
        }
        temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}
