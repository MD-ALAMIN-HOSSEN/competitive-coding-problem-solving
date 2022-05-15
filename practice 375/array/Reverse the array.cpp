#include<iostream>
using namespace std;

void display(int arr[],int a){
    for(int i=0; i<a ; i++){
        cout<<arr[i]<<" ";
    }
}

int *reverse (int arr[],int a){
    int i=0,j=a-1;
   for(i; i<j ; i++){
      int tem;
      tem=arr[i];
      arr[i]=arr[j];
      arr[j]=tem;
      j--;
   }
   return arr;
}

int main (){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int *reverse_array = reverse(arr,size);
    //display reverce array
    display(reverse_array,size);
    return EXIT_SUCCESS;
}