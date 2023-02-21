#include <iostream>

using namespace std;

 main() {
  int choice;
  
  cout << "Welcome to the menu of programs!" << endl;
  cout << "Name: MAlik Aryan HAider!" << endl;
  
  cout << "Please choose a program from the following options:" << endl;
  cout << "1. Program 1" << endl;
  cout << "2. Program 2" << endl;
  cout << "3. Program 3" << endl;
    cout << "4. Program 4" << endl;
  cout << "5. Program 5" << endl;
  cout << "6. Program 6" << endl;  
  cout << "7. Program 7" << endl;
  cout << "8. Program 8" << endl;
  cout << "9. program 9" << endl;
  cout << "10.quit" << endl;
  cout << "Enter your choice: ";
  
  cin >> choice;
  
  switch (choice) {
    case 1:
      cout << "Running Program 1..." << endl;
      // Program 1 code here
        int input[5], count, i, min;
       
    cout << "Enter 5 Number in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
	   for(i = 0; i < count; i++){
        cin >> input[i];
    }
     
    min = input[0];
    // search num in input Array from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
 
    cout  << "Minimum Element\n" << min;
 
    return 0;
   
      break;
    case 2:
      cout << "Running Program 2..." << endl;
      // Program 2 code here
       int max;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
     
    max = input[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] > max){
            max = input[i];
        }
    }
 
    cout  << "MAX Element\n" << max;
 
    return 0;
      break;
    case 3:
      cout << "Running Program 3..." << endl;
      // Program 3 code here
    
    int  num;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array\n";
    cin >> num;
      
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }
 
    return 0;
      break;
       case 4:
      cout << "Running Program 4..." << endl;
      // Program 4 code here
        int arr[10];
   cout<<"Enter 10 numbers: ";
   for(i=0; i<10;i++)
      cin>>arr[i];
   cout<<"\nList of Odd Numbers are:\n";
   for(i=0; i<10; i++)
   {
      if(arr[i]%2!=0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
      break;
      break;
     case 5:
      cout << "Running Program 5..." << endl;
      // Program 5 code here
      break;
      case 6:
      cout << "Running Program 6..." << endl;
      // Program 6 code here
       
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
      break;   
       case 8:
      cout << "Running Program 8..." << endl;
      // Program 8 code here
     
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
      break;
      case 9:
      cout << "Running Program 8..." << endl;
      // Program 9 code here
      //Taking values from the user
	
	for(int i=0; i<5; i++)
	{
	cout<<"Enter values "<<i+1<<"=";
	cin>>arr[i];
    }

//Showing values of array
	cout<<"Values of Array are: ";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

//  To print unique elements of array
	cout<<"\nThe unique elements of Array are:";
	for(int i=0;i<5;i++)
	{
		int j;
		for(j=0; j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				break;
			}
		}
		if(i==j)
		{
			cout<<arr[i];
		}
	}
	
      
	case 10:
      cout << "Quitting..." << endl;
      break;
    default:
      cout << "Invalid choice. Please try again." << endl;
     
  }
  

}
