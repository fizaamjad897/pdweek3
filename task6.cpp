#include<iostream>
using namespace std;
main()
{
float sizeofbag;
float costofbag;
float areabybag;
float costperpound;
float areaperpound;
cout<< "Enter size of bag in pounds  ";
cin>>sizeofbag;
cout<< "Enter cost of the bag ";
cin>>costofbag;
cout<< "Enter area covered by each bag in square feet ";
cin>>areabybag;
costperpound=costofbag / sizeofbag;
cout<< "Cost of fertilizer per pound is :  " <<costperpound;
areaperpound=sizeofbag * areabybag;
cout<<endl;
cout<< "Cost of fertilizing the area per square feet :  " <<areaperpound;
}