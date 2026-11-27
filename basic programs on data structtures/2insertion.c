#include<stdio.h>
#define MAX 100
 
void printArray(int *arr, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}
void InsertionSort(int *arr,int n){
     
    for(int i=0; i< n; i++){
       int key=arr[i];
        int j=i-1;

        while(j>=0 &&arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        } 
        arr[j+1]=key;
    }

}

int main(){
    int arr[MAX];
    int i, n;
 
    printf("Enter number of element (1 To %d)\n",MAX);
    scanf("%d",&n);

    printf("Enter %d element :",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Before insertion\n");
    printArray(arr, n);

   InsertionSort(arr, n);
printf("After insertion\n");
    printArray( arr , n );
}

