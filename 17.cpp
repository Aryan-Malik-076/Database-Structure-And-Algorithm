#include<iostream>
using namespace std;


int main()
{
	
    int aryan[100], malik[100], haider[100];
	int r, t, p, x;
	
    cout<<"Please Enter the Size of First Array: "<<endl;;
    cin>>r;
    cout<<"Enter "<<r<<" Elements for First Array: "<<endl;
    for(p=0; p<r; p++)
    {
    cin>>aryan[p];
    haider[p] = aryan[p];
    }
	x = p;
    cout<<"\n Please Enter the Size Of Second Array: "<<endl;
    cin>>t;
    cout<<"Enter "<<t<<" Elements for Second Array: "<<endl;
    for(p=0; p<t; p++)
    {
	cin>>malik[p];
    haider[x] = malik[p];
    x++;
    }
    
    
    
    cout<<"\nThe Merged Array Is :"<<endl;
    for(p=0; p<x; p++)
    cout<<malik[p]<<" ";
    cout<<endl;
}
    
