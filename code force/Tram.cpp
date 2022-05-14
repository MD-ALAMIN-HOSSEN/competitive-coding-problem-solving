#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x=0,j=0,k,l;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>k>>l;
        x-=k;
        x=x+l;
        
       if (x>0&&x>j){
       j=x;
       };
    }    
    system("cls");
    cout<<j;
    return EXIT_SUCCESS;
}