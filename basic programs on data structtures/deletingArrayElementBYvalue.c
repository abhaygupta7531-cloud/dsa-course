#include<stdio.h>
int main(){
    int array[10]={10,20,30,40,50};
    int i,n=5;
    int value =20;
    int pos=-1;

    printf("Bfore deletion of array\n");
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    for(i=0; i<n; i++){
        if(array[i]==value){
            pos=i;
            break;
        }
    }
    if(pos != -1){
        for(i=pos; i < n-1; i++){
            array[i]=array[i+1];
        }
        n--;
        printf("After deletionof value\n");
        for(i=0; i<n; i++){
            printf("%d\n",array[i]);
        }
    }else
        printf("Element not found\n");
    return 0;
}