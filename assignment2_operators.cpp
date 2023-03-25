#include<iostream>
using namespace std;

int main(){
    int num1,num2=0;
    /*
    cout<<"Enter number 1"<<"\n";
    cin>>num1;
    cout<<"Enter number 2"<<"\n";
    cin>>num2;
    if(num1==num2){
        cout<<1<<endl;;
    }
    else
    cout<<0<<endl;

// question 2
    int a,b=0;
    cin>>a;
    cin>>b;
    if(a<b && a <50)
    cout<<1<<endl;
    else
    cout<<0<<endl;
    

//question 3
int total=45;
int boys=25;
int  aGrade=(int)100*17/80;
int girls=aGrade-17;
cout<<girls<<endl;
    
//question 4
int first=0;
int secLast=0;
int num=0;
cin>>num;
first=num/10000;
secLast=(num/10)%10;
cout<<"Sum of first and secont last number is "<<first+secLast<<endl;
*/

//qeustion 5
int num_3;
cin>>num_3;
int sum=0;
for(int i=0;i<3;i++){
    sum+=num_3%10;
    num_3=num_3/10;
}
cout<<"The sum of digits of 3 digit number is "<<sum;

return 0;
}