#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    system("cls");
    for(int i=0;i<k;i++) (n%10==0) ? (n/=10):(n--);
    cout<<n;
    return EXIT_SUCCESS;
}