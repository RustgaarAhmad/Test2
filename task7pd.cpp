#include<iostream>
using namespace std;
main()
{
cout<< "Enter the movie name:";
string moviename;
cin>> moviename;
cout<< "Enter the adult ticket price: $";
int adultprice;
cin>> adultprice;
cout<< "Enter the child ticket price: $";
int childprice;
cin>> childprice;
cout<< "Enter the number of adult tickets sold:";
int adultticket;
cin>> adultticket;
cout<< "Enter the number of child tickets sold:";
int childticket;
cin>> childticket;
cout<< "Enter the percentage of amount to be donated to charity:";
int amountdonated;
cin>> amountdonated;
cout<< "moviename:" <<moviename << endl;
cout<< "Total amount generated from ticket sales: $";
int totalamount;
totalamount = adultprice * adultticket + childprice * childticket ;
cout<< totalamount << endl;
cout<< "Donation to charity: $";
int donation;
donation = (totalamount * 10) / 100;
cout<< donation << endl;
cout<< "Remaining amount after donation: $";
int remaining;
remaining = totalamount - donation;
cout<< remaining;
}