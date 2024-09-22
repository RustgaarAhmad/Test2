#include<iostream>
using namespace std;
main()
{
cout<< "Enter vegetable price per kilogram (in coins):";
float vegetableperkilogram;
cin>> vegetableperkilogram;
cout<< "Enter fruit price per kilogram (in coins):";
float fruitperkilogram;
cin>> fruitperkilogram;
cout<< "Enter total kilograms of vegetables:";
int vegetableskilo;
cin>> vegetableskilo;
cout<< "Enter total kilograms of fruits:";
int fruitskilo;
cin>> fruitskilo;
float totalearningcoins = (vegetableperkilogram * vegetableskilo) + (fruitperkilogram * fruitskilo);
cout<< "Total earnings in rupees:";
float totalearnrupees;
totalearnrupees= totalearningcoins / 1.94;
cout<< totalearnrupees;
}