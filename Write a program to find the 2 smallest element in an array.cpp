#include<iostream>

using namespace std;
int main()
{
   int i, num[10], small, smaller;
   cout<<"Enter any 10 elements for the array: ";
   for(i=0; i<10; i++)
      cin>>num[i];
   small = num[0];
   for(i=0; i<10; i++)
   {
      if(small>num[i])
         small = num[i];
   }
   smaller = num[0];
   for(i=0; i<10; i++)
   {
      if(smaller>num[i])
      {
         if(num[i]!=small)
            smaller = num[i];
      }
   }
   cout<<"\nSecond smallest element = "<<smaller;
   cout<<endl;
   return 0;
}
