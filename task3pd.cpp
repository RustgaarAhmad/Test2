#include<iostream>
using namespace std;
main()
{
cout<< "Enter Initial Velocity (m/s):";
float initialvelocity;
cin>> initialvelocity;
cout<< "Enter Acceleration of car (m/s^2):";
float Acceleration;
cin>> Acceleration;
cout<< "Enter Time (s):";
float time;
cin>> time;
cout<< "Final Velocity of car (m/s):";
float finalvelocity;
finalvelocity=Acceleration * time + initialvelocity;
cout<< finalvelocity;
}
