#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int i,j,k,temp,temp2;
	int faizan[5];
	int faizan2[5];
	cout<<"Please Enter Five Numbers in First Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	cout<<"\nThe First Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
    cout<<"\nPlease Enter Five Numbers in Second Array : "<<endl;
	for(int k=0; k<5; k++){
	cin>>faizan2[k];
	}
	
	
	cout<<"\nThe Second Array You Entered is : "<<endl;
	for(int k=0; k<5; k++){
	cout<<faizan2[k]<<" ";
	}
    
   	int count=0;
	for (int i= 0;i<5; i++)
	{
		if (faizan[i] != faizan2[i])
		{
			count++;
			break;
		}
	}
	if (count != 0) {
		cout << "\nBoth Arrays Are Not  Same" << endl;
	}
	else {
		cout << "\nBoth Arrays Are  Same" << endl;
	}
}
