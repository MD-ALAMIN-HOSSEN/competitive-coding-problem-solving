#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a =0;
    int r;
    long long i;
    cin>>i;
    while (i!=0){
        r=i%10;
        i/=10;      
        if (r==4 || r==7){
           a++;        
        };      
    }  
    (a==4||a==7) ? cout<<"YES" : cout<<"NO";    
    return EXIT_SUCCESS;
}
