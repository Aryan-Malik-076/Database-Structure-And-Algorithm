#include<iostream>
using namespace std;


int main()
{
	char x;
	do{
	int i,j,temp;
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	

    
    for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){
	if(faizan[j] < faizan[i])
	{
	temp = faizan[i];
    faizan[i] = faizan[j];
    faizan[j] = temp;
     }
    }
    }


    cout<<"\nElements of Array in Ascending Order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<faizan[i]<<endl;
    }
    
    int max;
     i=0; j=4;
    max=faizan[j]-faizan[i];
    cout<<"\nMaximum Difference Is :"<<max<<endl;
};
}
    
