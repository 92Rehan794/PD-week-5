#include<iostream>
#include<iomanip>
using namespace std;
void pyramid_volume(float length, float width, float height, string unit);
main()
{
 float length;
 cout << "Enter the length of the pyramid (in meters): "; 
 cin >> length;
 float width;
 cout << "Enter the width of the pyramd (in meters): ";
 cin >> width;
 float height;
 cout << "Enter the height of the pyramid (in meters): ";
 cin >> height;
 string unit;
 cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
 cin >> unit;
 pyramid_volume(length, width, height, unit);
}

 void pyramid_volume(float length, float width, float height, string unit)
{
 float vol, centimeters, kilometers, millimeters;
 vol=(length*width*height)/3;
 kilometers=vol/(1000000000);
 centimeters=vol*100*100*100;
 millimeters=vol*1000*1000*1000;
 if (unit=="meters")
{
 cout <<"The volume of the pyramid is: " << vol << " cubic meters";
}
 if (unit=="centimeters")
{
 cout << fixed << setprecision(6) << "The volume of the pyramid is: " <<centimeters<< " cubic centimeters";
}
 if (unit=="kilometers")
{
 cout << fixed << setprecision(6) << "The volume of the pyramid is: " <<kilometers<< " cubic kilometers";
}
 if (unit=="millimeters")
{
 cout << fixed << setprecision(3) << "The volume of the pyramid is: " <<millimeters<< " cubic millimeters";
}
}