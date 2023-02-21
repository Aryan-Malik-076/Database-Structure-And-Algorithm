
//c++ program to check number positive,negative or zero//



#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the number" << endl;
    cin>>num1;
    if(num1>0){
    cout<<num1<<" is a positive number";
}
else if(num1<0){
    cout<<num1<<" is a Negative number";
}
else{
    cout<<"You entered Zero";
}
getch();
    return 0;
}
