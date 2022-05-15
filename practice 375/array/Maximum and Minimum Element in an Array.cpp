#include<iostream>
using namespace std;
//struct for minimum and maximum number pair
struct numbers{
 int min;
 int max;
};
struct numbers get_min_max(int a[],int b){
    struct numbers min_max;//creating local struct variable
    if(b==1){
        cout<<"there is only one number in the array !!!"<<a[0];
    }
    //storing first two elements fo the array
    if(a[0]>a[1]){
        min_max.min=a[1];
        min_max.max=a[0];
    }
     else{
          min_max.min=a[0];
          min_max.max=a[1];
     }
     if(b==2){
         return min_max;
     }
     //loop the array to chack and store the min and max value
    for(int i=2 ; i<b ; i++){
        if(a[i]>min_max.max){
            min_max.max=a[i];
        }
        if(a[i]<min_max.min){
            min_max.min=a[i];
        }
    } 
    return min_max;
}

int main(){
    int a[6]={5,2,3,4,5};
    int array_size=5;
    struct numbers min_max =get_min_max(a,array_size);
    system("cls");
    cout<<"the minimun number in array :"<<min_max.min<<endl;
    cout<<"the maximum number in array :"<<min_max.max;
    return 0;
}