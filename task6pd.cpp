#include<iostream>
using namespace std;
main()
{
cout<< "Enter the size of the fertilizer bag in pounds:";
int fertilizerbag;
cin>> fertilizerbag;
cout<< " Enter the cost of the bag: $";
int costbag;
cin>> costbag;
cout<< "Enter the area in square feet that can be covered by the bag:";
int areacovered;
cin>> areacovered;
cout<< "Cost of fertilizer per pound: $";
int perpound;
perpound = costbag / fertilizerbag;
cout<< perpound << endl;
cout<< "Cost of fertilizing per square foot: $";
int persquarefoot;
persquarefoot = fertilizerbag * areacovered;
cout<< persquarefoot;
}