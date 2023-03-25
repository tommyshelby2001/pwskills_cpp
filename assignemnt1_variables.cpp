// C++ program to display "Hello World"

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int num1,num2=0;
	cout<< "Enter two numbers"<<endl;
	cin>>num1>>num2;
	int product= num1*num2;
	cout<<"The product of "<< num1<<" and "<< num2 <<" is " <<product<<endl;

// ASCII value of charcter u
char u='U';
cout<<"ASCII value of character u is "<<int(u)<<endl;

// Length and breadth of the reactangle
float length, breadth=0;
cout<<"Enter Length of the rectangle "<<endl;
cin>>length;
cout<<"Enter breadth of the rectangle "<<endl;
cin>>breadth;
float area=length*breadth;
cout<<"Area of the rectangle is "<<area<<endl;

//Calculate cube of the number
int cubeNum;
cout<<"Enter a number to find its cube"<<endl;
cin>>cubeNum;
int cube=pow(cubeNum,3);
cout<<"Cube of the number is "<<cube<<endl;

cout<<"Size of int is "<< sizeof(int)<<endl;
cout<<"Size of short is "<< sizeof(short)<<endl;
cout<<"Size of char is "<< sizeof(char)<<endl;
cout<<"Size of long is "<< sizeof(long)<<endl;
cout<<"Size of float is "<< sizeof(float)<<endl;
cout<<"Size of double is "<< sizeof(double)<<endl;
cout<<"Size of long double is "<< sizeof(long double)<<endl;
cout<<"Size of bool is "<< sizeof(bool)<<endl;



//program to swap to numbers with the help of third variable



int temp,swap1,swap2=0;
cout<<"Enter num1"<<endl;
cin>>swap1;
cout<<"Enter num2"<<endl;
cin>>swap2;
temp=swap1;
swap1=swap2;
swap2=temp;
cout<<"Swapped numbers are "<<swap1<<" and "<<swap2<<endl;

return 0;

}
