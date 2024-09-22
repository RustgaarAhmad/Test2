#include<iostream>
using namespace std;
main()
{
cout << "Enter number of minutes: ";
float minutes;
cin >> minutes;
cout << " Enter Frames per second: ";
float fps;   
cin >> fps;
cout << "Total number of frames: ";
float Total;
Total = minutes * fps * 60;  
cout << Total;
}