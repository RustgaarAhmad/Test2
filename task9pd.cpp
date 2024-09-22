#include <iostream>
using namespace std;
main()
 {
cout << "Enter a 4-digit number: ";
int num;
cin>> num; 
int digit1 = num % 10;
int digit2 = (num / 10) % 10;
int digit3 = (num / 100) % 10;
int digit4 = (num / 1000) % 10;
int sum;
sum = digit1 + digit2 + digit3 + digit4;
cout << "Sum of the individuals digits: ";
cout << sum;
}