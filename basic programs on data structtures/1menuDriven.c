#include<stdio.h>
#define MAX 10

int arr[MAX]={10,20,30,40,50};
int n=6;

//1) array print
void printArray(){
    int i;
    printf("Array:");
    for(i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}

//2)delete by index

void deleteByindex(){
    int pos;
    int i;
    printf("Enter index to delete\n");
    scanf("%d",&pos);
    if(pos<0 || pos >=n){
        printf("Invelid index!\n");
        return;
    }
    for(i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }n--;
    printf("Element delete successfully.\n");
}

//3) delete by value
void deleteByvalue(){
    int value;
    int i;
    int pos=-1;

    printf("Enter the value\n");
    scanf("%d",&value);
    //find value
     for(i=0; i<n; i++){
        if(arr[i]==value){
        pos=i;
        break;

    }
}
    //deleting value
    if (pos != -1){
        for(i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        printf("Element delete success fully \n");
    }else{
        printf("Value %d not found in array.\n",value);
    }
    
}

int main(){
    int choice;
    do
    {
        printf("\n___MENU___\n");
        printf("1.Delete element by index\n");
        printf("2.delete element by value\n");
        printf("3.print array\n");
        printf("4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice){
            case 1:
            deleteByindex();
            break;
            case 2:
            deleteByvalue();
            break;
            case 3:
            printArray();
            break;
            case 4:
            printf("Progaram ended.\n");
            break;
            default:
            printf("Invalid choice !\n");
        }
    } while (choice !=4);
    return 0;
    
}