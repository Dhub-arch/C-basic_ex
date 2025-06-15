#include <iostream>

using namespace std;

int main()

{
   double hours,rate,pay ;
   
   cout<< "How many hours did you work?" ;
   cin >> hours;
   
   cout<< "How much do you pay for an hour? ";
   cin>> rate;
   
   pay = hours * rate ;
   
   cout<< "You have earned Rs" << pay << endl ;
   
   return 0;
}