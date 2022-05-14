#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a =0;
    int x,r,i;
    cin>>x;
    i=x;
    while (i!=0){
        r=i%10;
        i/=10;      
        if (r!=4 && r!=7){
           a++;
        };      
    }
    (a<=0) ? cout<<"YES" : cout<<"NOT";    
    return EXIT_SUCCESS;
}