#include<iostream>
using namespace std;
main()
{
string moviename;
float adultticketprice;
float childticketprice;
float adultticketsold;
float childticketsold;
float perctodonate;
float amountgenerated;
float totaladulttickets;
float totalchildtickets;
float afterdonations;
float totaldonations;
cout<< "Enter Movie name ";
cin>>moviename;
cout<< "Enter adult ticket price: ";
cin>>adultticketprice;
cout<< "Enter child ticket price: ";
cin>>childticketprice;
cout<< "Enter adult ticket sold: ";
cin>>adultticketsold;
cout<< "Enter child tickets sold: ";
cin>>childticketsold;
cout<< "Enter percentage to donate: ";
cin>>perctodonate;
totaladulttickets= adultticketprice * adultticketsold;
totalchildtickets= childticketprice * childticketsold;
amountgenerated= totaladulttickets+totalchildtickets;
cout<< "Total amount generate: " <<amountgenerated;
cout<<endl;
totaldonations= (amountgenerated * perctodonate )/100;
afterdonations= amountgenerated-totaldonations;
cout<< "Amount after donations: "<<afterdonations;
}