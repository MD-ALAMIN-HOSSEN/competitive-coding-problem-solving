#include<iostream>
using namespace std;
//     *
//   * * *
// * * * * *
int main (){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){// to print the rows
      for(int j=0;j<n-i;j++){//printing the space in every row
          cout<<"  ";
      }
      for(int j=i;j>0;j--){//printing the numbers from i to 1
          cout<<"*"<<" ";
      }
      for(int j=1;j<i;j++){// printing the numbers from i+1 to i
          cout<<"*"<<" ";
      }
        cout<<endl;
    }
    return 0;
}