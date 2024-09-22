#include<iostream>
using namespace std;
main()
{
cout<< "Enter the number of sides of polygon";
int n;
cin>> n;
cout<< "The sum of internal angles of a n-sided polygon is:";
int sum;
sum=(n-2)*180;
cout<< sum << "degrees";
}