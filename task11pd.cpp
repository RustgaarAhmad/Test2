#include<iostream>
using namespace std;
main()
{
cout<< "Enter the person's age:";
int personage;
cin>> personage;
cout<< "Enter the number of time's they've moved:";
int moved;
cin>> moved;
cout<< "Average number of years lived in the same house:";
int averagenumbers;
averagenumbers = personage / (moved+1);
cout<< averagenumbers;
}