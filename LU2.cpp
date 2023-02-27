#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter Max number= ";
	cin >> number;
	
	cout << "\nList of Even Numbers from 0 to " << number << " are\n"; 
	for(int i = 0; i <= number; i++)
  	{
  		if ( i % 2 == 0 )
  		{
  			cout << i <<" ";
		}	
  	}
		
 	return 0;
}