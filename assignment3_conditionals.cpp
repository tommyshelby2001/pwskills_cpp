#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int length;
    cin>>length;
    int breadth=0;
    cin>>breadth;
    if(length==breadth)
    cout<<"it is a square "<<"\n";
    else
    cout<<"it is a rectangle "<<"\n";

    // question 2
    int absNum;
    cin>>absNum;
    cout<<" The absolute value of the number entered by user is "<<abs(absNum)<<endl;

    //question 3

    int profit,loss,costPrice,selPrice=0;
    cout<<"Enter cost Price "<<"\n";
    cin>>costPrice;
    cout<<"Enter Selling Price "<<"\n";
    cin>>selPrice;
    if(costPrice>selPrice){
        loss=costPrice-selPrice;
        cout<<"The loss is "<<loss<<"\n";
    }
    else{
        profit=selPrice-costPrice;
        cout<<"The profit is "<<profit<<"\n";
    }


//question 4
int skipNumber;
cout<<"Enter an integer"<<"\n";
cin>>skipNumber; 
if(skipNumber<0){
    cout<<"The numeber is negative and skipped"<<endl;
}
else{
    cout<<skipNumber<<endl;
}


//question 5
cout<<"Enter an operator "<<"\n";
char op;
cin>>op;
cout<<"Enter two numbers"<<"\n";
int num1,num2;
cin>>num1>>num2;
float result=0;
switch (op) { 
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-abs(num2);
    break;
    case '*':
    result=num1*num2;
    break;
    case '/':
    result=num1/num2;
    break;
    default:
    cout<<"Error operator is not correct"<<"\n";
    break;
}
cout<<"The result is "<<result<<"\n";


//question 6
cout<<"Enter your marks "<<"\n";
int marks;
cin>>marks;
if(marks<=100 && marks>90)
    cout<<"Your Grade is A+"<<endl;
else if(marks<=90 && marks >80){
    cout<<"Yout grade is A"<<endl;
}
return 0;

}