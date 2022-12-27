#include<iostream>
using namespace std;
main()
{
float vegperkg;
float fruitsperkg;
int totalkgsofveg;
int totalkgsoffruits;
float costofveg;
float costoffruits;
float costincoins;
float costinrupees;
cout<< "Enter vegetables price per kg ";
cin>>vegperkg;
cout<< "Enter fruits price per kg ";
cin>>fruitsperkg;
cout<< "Total kg of vegetables ";
cin>>totalkgsofveg;
cout<< "Total kg of fruits ";
cin>>totalkgsoffruits;
costofveg= vegperkg * totalkgsofveg;
costoffruits= fruitsperkg * totalkgsoffruits;
costincoins= costofveg+costoffruits;
costinrupees= costincoins * 1.94;
cout<< "The earnings of harvest in Rupees are: "<<costinrupees;
}