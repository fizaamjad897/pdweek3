#include<iostream>
using namespace std;
main()
{
float vf;
float vi;
int time;
float acceleration;
cout<< "Enter initial Velocity ";
cin>>vi;
cout<< "Enter Acceleration ";
cin>>acceleration;
cout<< "Enter Time ";
cin>>time;
vf=vi+ (acceleration * time);
cout<< "The final velocity is "<<vf;
}