#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius , pi = 3.14159 , area ,circumference;


      cout << "enter the radius of the circle" << endl ;
      cin >> radius ;


      area = pi * radius * radius ;
      circumference = 2* pi *radius ;


      cout << "circumference = " << circumference << endl ;
       cout << "area = " << area<< endl ;


    return 0;
}

