/* Write a simple program that convert the temperature in degree Celsius to degree Fahrenheit and vice
versa using the basic concept of class and object. Make separate class for Centigrade and Fahrenheit
which will have the private member to hold the temperature value and make conversion functions in each
class for conversion from one to other. For example you will have functiontoFahrenheit () in class Celsius */

#include <iostream>
using namespace std;

class cel
{
private:
  float celValue;

public:
  float functiontoFahrenheit()
  {
    return (celValue * 180 / 100) + 32;
  }
};

class far
{
private:
  float farValue;

public:
  void setdata()
  {
    cout << "\nEnter value in Fahrenheit\n"
         << endl;
    cin >> farValue;
  }
  float functiontoCelsius()
  {
    return ((farValue - 32) / 180 * 100);
  }
};

int main(int argc, char const *argv[])
{
  /* code */
  cel Celcius;
  cout << "A simple program that convert the temperature in degree Celsius to degree Fahrenheit and vice versa.\n";
  far Fahrenheit;
  Celcius.setdata();
  cout << " The value in Fahrenheit is " << Celcius.functiontoFahrenheit() << "\n";
  Fahrenheit.setdata();
  cout << " The value in Celcius is " << Fahrenheit.functiontoCelsius() << "\n";
  return 0;
}
