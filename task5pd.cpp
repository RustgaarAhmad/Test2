#include<iostream>
using namespace std;
main()
{ 
 cout << "Enter the Name of person: ";
 string name; 
 cin >> name;
 cout << "Enter the target weight loss in kilograms: ";
 float targetweight; 
 cin >> targetweight;
 float daysRequired;
 daysRequired = targetweight * 15;
 cout << name <<"will need" << daysRequired << " days to lose " << targetweight << " kg by following the doctor's suggestion.";
}