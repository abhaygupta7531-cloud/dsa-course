#include<stdio.h>
#define MAX 100

void printArray(int *arr,int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}
void bubbleSort(int *arr,int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}




int main(){
    int arr[MAX];
    int n,i;

    printf("Enter number number of element(1 to %d):\n",MAX);
    scanf("%d", &n);

    printf("Enter %d element:\n", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    printf("Before bubble sort\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Ater bubble sort array is:\n");
    printArray(arr, n);
    return 0;
} 