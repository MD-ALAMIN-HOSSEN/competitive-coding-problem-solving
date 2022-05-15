#include <iostream>
using namespace std;
void change(int *arr){
 *(arr+2)=10;
}
int main()
{
   int data[5]={1,2,3,4,5};
   change(data);
   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}