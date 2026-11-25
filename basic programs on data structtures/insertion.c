#include<stdio.h>
int main(){
    int arr[5]={23,12,11,34,2};
    int i,j,key;
    int n=5;

    for(i=0; i<5; i++){
        key=arr[i];
        j=i-1; 
    
    for(j=i-1; j>=0;j--){
        if(arr[j]>key){
        arr[j+1]=arr[j];
        }else{
            break;
    }
}
    arr[j+1]=key;
}

printf("After insertion \n");
for(i=0; i<5; i++){
    printf("%d\n",arr[i]);
}
return 0;
}
