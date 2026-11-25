#include<stdio.h>
int main(){
    int arr[5]={50,23,1,5,6};
    int i,j,temp;

    for(i=0; i<5;i++){
        for(j=0;j<5-i; j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    printf("Sorting array in desending order:\n");
    for(i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}