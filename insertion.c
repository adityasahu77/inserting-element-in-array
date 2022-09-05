#include<stdio.h>
void display(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
}
int insertion(int arr[], int size, int element,int capacity, int index){
    
    for (int i = size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;

}

int main(int argc, char const *argv[])
{
    int arr[100]={3,5,6,8,9};
    int size=5,index=2,capacity=100;
    int element=90;
    display(arr,size);
    insertion(arr, size, element,100,index);

    size=+1;
    //display(arr,size);
}
