#include<iostream>
using namespace std;
main()
{
int usernum;
int rem1;
int digit1;
int rem2;
int digit2;
int digit4;
int digit3;
int sum;
cout<< "Enter a 4 digit number: ";
cin>>usernum;
cout<<endl;
rem1=usernum % 1000;
digit1=usernum/1000;
rem2= rem1 % 100;
digit2=rem1 / 100;
digit3=rem2/10;
digit4=rem2 % 10;
sum= digit1+digit2+digit3+digit4;
cout<< "The sum of the digits will be "<<sum;
}