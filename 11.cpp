

///c++ program for fibonacci series 1 2 3 to n elements///

#include<iostream>
using namespace std;
int main()
{
      int first=0, second=1, i, n, sum=0;
      cout<<"Enter the number of terms: "; cin>>n;
      //accepting the terms
      cout<<"Fibonacci Series: ";
  
      for(i=0 ; i<n ; i++)
     {  
               if(i <= 1)
      {
           sum=i;
                }
                    // to print 0 and 1
                else
                {
                      sum=first + second;
             first=second;
                      second=sum;  
                }
     cout<<sum<<" ";
      }  
    
   return 0;
}
