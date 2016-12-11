// 3. Create a class called carpart that has int data member for car id, int data member for charge/hour
// and float data member for time. Set the data and show the charges and parked hours of corresponding
// car id. Make two member functions for setting and showing the data. Member function should be called
// from other functions.

#include <iostream>
using namespace std;

class carpart
{
  private:
    int carid;
    int rate;
    float htime;

  public:
    void setdata()
    {
	cout << "\n Enter car ID: " << endl;
	cin >> carid;
	cout << "\n Enter Rate/Hour: " << endl;
	cin >> rate;
	cout << "\n Enter Hours parked: " << endl;
	cin >> htime;
    }
    void showdata()
    {
	cout << "\nThe Car ID is: " << carid << "\n";
	cout << "The Charge is: " << rate * htime << "\n";
    }
};

int main(int argc, char const *argv[])
{
    cout << "Shows the charges and parked hours of corresponding car id\n";
    carpart object;
    object.setdata();
    object.showdata();

    return 0;
}
