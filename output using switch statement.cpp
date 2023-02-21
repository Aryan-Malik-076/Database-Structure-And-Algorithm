#include <iostream>

using namespace std;

int main() {
  int choice;
  
  cout << "Welcome to the menu of programs!" << endl;
  cout << "Please choose a program from the following options:" << endl;
  cout << "1. Program 1" << endl;
  cout << "2. Program 2" << endl;
  cout << "3. Program 3" << endl;
    cout << "4. Program 4" << endl;
  cout << "5. Program 5" << endl;
  cout << "6. Program 6" << endl;
    cout << "7. Program 7" << endl;
  cout << "8. Program 8" << endl;
  cout << "9. Program 9" << endl;
  cout << "10. Quit" << endl;
  cout << "Enter your choice: ";
  
  cin >> choice;
  
  switch (choice) {
    case 1:
      cout << "Running Program 1..." << endl;
      // Program 1 code here
         int arr[10],even[10],odd[10],a,b,i;
    cout<<"Input numbers in the array";
    for(i=0;i<10;i++)
        cin>>arr[i];
    for(i=0;i<10;i++)
    {
            if(arr[i]%2==0)
                even[a++]=arr[i];
            else 
                odd[b++]=arr[i];
    }
    cout<<"The even numbers are: ";
    for(i=0;i<a;i++)
        cout<<even[i]<<" ";
    cout<<"\nThe odd numbers are: ";
    for(i=0;i<b;i++)
        cout<<odd[i]<<" ";
      break;
    case 2:
      cout << "Running Program 2..." << endl;
      // Program 2 code here
        int  evens, oods;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         evens ++;
      else
         oods++;
   }
   cout<<"\nTotal Number of Even Numbers = "<<evens;
   cout<<"\nTotal Number of Odd Numbers = "<<oods;
   cout<<endl;
   return 0;
      break;
    case 3:
      cout << "Running Program 3..." << endl;
      // Program 3 code here
        
    int size, j, temp;
 
    // Reading the size of the array
    cout<<"Enter size of array: ";
    cin>>size;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    //Sorting an array in ascending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            //If there is a smaller element found 
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
      break;
        case 4:
      cout << "Running Program 4..." << endl;
      // Program 4 code here
         int num[10];
    int   desc;

    cout<<"\n Enter 10 Numbers : \n";
    cout<<" ";
    for (i = 0; i < 10; ++i)
    cin>>num[i];
   
    for (i = 0; i < 10; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 10; ++i)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
    }
      break;
    case 5:
      cout << "Running Program 5..." << endl;
      // Program 5 code here
       int  small, smaller;
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
      break;
    case 6:
      cout << "Running Program 6..." << endl;
      // Program 6 code here
      int  tot, larg;
    cout<<"Enter the Size : ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    larg = arr[0];
    for(i=1; i<tot; i++)
    {
        if(larg<arr[i])
            larg = arr[i];
    }
    cout<<"\nLargest Number = "<<larg;
    cout<<endl;
    return 0;
      break;
	    case7:
      cout << "Running Program 7..." << endl;
      // Program 7 code here
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
      break;
    case8:
      cout << "Running Program 8..." << endl;
      // Program 8 code here
      break;
    case9:
      cout << "Running Program 9..." << endl;
      // Program 9 code here
      break;
    case10:
      cout << "Quitting..." << endl;
      break;   
   default:
 	    cout << "Invalid choice. Please try again." << endl;
      break;
  }
  
  return 0;
}
