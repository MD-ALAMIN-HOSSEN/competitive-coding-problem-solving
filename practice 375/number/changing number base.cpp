#include<bits/stdc++.h>
using namespace std;
int hexaTodecimal(string a){
   int ans =0;
   int x=1;
   int s=a.size();
   for (int i = s-1; i >=0; i--)
   {
       if(a[i]>='0' && a[i]<='9'){
         ans+=(a[i]-'0')*x;
       }
       if(a[i]>='A'&&a[i]<='E'){
         ans+=(a[i]-'A'+10)*x;
       }
       x*=16;
   }
  return ans;
  }

int binarytodecimal(int a){
    int ans=0;
    int x=1;
     while (a>0)
     {
         int lastDigit =a%10;
         ans+=lastDigit*x;
         x*=2;
         a/=10;
     }

    return ans;
}
int octaltodecimal(int a){
    int ans=0;
    int x=1;
     while (a>0)
     {
         int lastDigit =a%10;
         ans+=lastDigit*x;
         x*=8;
         a/=10;
     }

    return ans;
}

int decimalToBinary(int a){
    int x=1;
    int ans=0;
    while(x<=a){
        x*=2;
    }
    x/=2;
    while(x>0){
        int lastNumber=a/x;
        a-=lastNumber*x;
        x/=2;
        ans=ans*10+lastNumber;
    }
    return ans;
}

int decimalToOctal(int a){
  int x=1,ans=0;
  while(x<=a){
      x*=8;
      }
    x/=8;
    while(x>0){
        int lastNumber=a/x;
        a-=lastNumber*x;
        x/=8;
        ans=ans*10+lastNumber;
    }
  return ans;
}

string decimalToHexa(int a){
  int x=1;
  string ans="";
  while(x<=a){
      x*=16;
      }
    x/=16;
    while(x>0){
        int lastNumber=a/x;
        a-=lastNumber*x;
        x/=16;
        if(lastNumber<=9){
        ans=ans+to_string(lastNumber);
        }
        if(lastNumber>9){
            char c='A'+ lastNumber -10;
           //ans=ans+c;
            ans.push_back(c);
        }
    }
  return ans;
}

int main(){
    int a;
    string b;
    cin>>b;
    //cout<<decimalToBinary(a);
    //cout<<decimalToOctal(a);
    //cout<<decimalToHexa(a);
    //cout<<binarytodecimal(a);
    //cout<<octaltodecimal(a);
    cout<<hexaTodecimal(b);
    return 0;
}
