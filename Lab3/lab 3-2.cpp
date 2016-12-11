// 2. Assume that you want to check whether the number is prime or not. Write a program that asks for a
// number repeatedly. When it finishes the calculation the program asks if the user wants to do another
// calculation. The response can be 'y' or 'n'. Don't forget to use the object class concept.

#include <iostream>
using namespace std;

class primeCalc
{
private:
  int pval;

public:
  void setdata()
  {
    cin >> pval;
  }
  int ifPrime()
  {
    int n = 2;
    while (n < 10)
    {
      if (pval % n == 0)
        return 0;
      n++;
    }
    return 1;
  }
  primeCalc()
  {
    char ch;
    do
    {
      cout << "\n Enter Prime number. \n"
           << endl;
      setdata();
      if (ifPrime())
        cout << "\n BINGO ! Prime\n"
             << endl;
      else
        cout << "\nAh oh! Not a prime.\n"
             << endl;
      cout << "\nWanna try again? y or n?? \n"
           << endl;
      cin >> ch;
    } while (ch == 'y');
  }
};

int main(int argc, char const *argv[])
{
  cout << "Check whether the number is prime or not.\n";
  primeCalc object;
  return 0;
}
