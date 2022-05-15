#include<iostream>
using namespace std;
int count=0;
void subarr(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
        for ( int k =i; k <=j ; k++)
        {
            cout<<arr[k];          
        }
        count++;
        cout<<endl;
    }
  }
  
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    subarr(arr,n);
    cout<<"array has "<<count<<"subarray.";
    return EXIT_SUCCESS;
}