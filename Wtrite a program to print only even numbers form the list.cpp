#include<iostream>

using namespace std;
int main()
{
   int arr[10], i;
   cout<<"Enter any 10 numbers: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   cout<<"\nEven Numbers are:\n";
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
