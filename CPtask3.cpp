#include<iostream>
#include<iomanip>
using namespace std;
float vehicle_price(char , float );
main()
{
 char vehicle;
 cout << "Enter the vehicle code (M, E, S, V, T): ";
 cin >> vehicle;
 float price;
 cout << "Enter the price of the vehicle: $";
 cin >> price;
 float result =vehicle_price(vehicle, price);
 cout << fixed << setprecision(2);
 cout << "The final price of a vehicle of type " << vehicle << " after adding the tax is $" << result;
}
 float vehicle_price(char vehicle, float price)
{
  float price_after_tax;
 if (vehicle=='M')
{
 price_after_tax=price+(price*0.06);
}
else if (vehicle=='E')
{
 price_after_tax= price + (price*0.08);
}
else if (vehicle=='S')
{
 price_after_tax=price+(price*0.10);
}
 else if(vehicle=='V')
{
 price_after_tax=price+(price*0.12);
}
 else if (vehicle=='T')
{
 price_after_tax=price + (price*0.15);
}
return price_after_tax;
}