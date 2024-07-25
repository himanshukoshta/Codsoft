#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	cout << "\nSIMPLE CALCULATOR" << endl;
	char ch;
	cout << "\nEnter the operator to perform calculation(+,-,*,/): ";
	cin >> ch;
	int a,b,c;
	cout << "\nEnter first number: ";
	cin >> a;
	cout << "\nEnter second number: ";
	cin >> b;
	
	if(ch=='+')
	{
		c = a + b;
		cout << "\nSum of two numbers is ";
		cout << c;
	}
	
	else
	{
	 if(ch=='-')
	 {  
		c = a - b;
		cout << "Subtraction of two numbers is ";
		cout << c;
	 }
	
	else
	{
	 if(ch=='*')
	 { 
		c = a * b;
		cout << "Multiplication of two numbers is ";
		cout << c;
	 } 
	
	else
	{
	 if(ch=='/')
	 {
		c = a/b;
		cout << "Division of two numbers is ";
		cout << c;
	 }
	
	else
	{
		cout << "\nInvalid input!!";
	}
   }
}
}
	return 2;
}
