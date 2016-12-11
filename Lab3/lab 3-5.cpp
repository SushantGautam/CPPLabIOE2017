// Assume that an object represents an employee report that contains the information like employee id, total
// bonus, and total overtime in a particular year. Use array of objects to represent n employees' reports.
// Write a program that displays report. Use setpara () member function to set report attributes by passing
// the arguments and member function displayreport () to show the reports according to parameter passed.
// Display the report in following format.
// Employee with ... ... ... has received Rs ... ... ...as bonus
// and had worked ... ... ... hours as an overtime in year ... ... ...
#include <iostream>
using namespace std;

class employee
{
  private:
    int id, bonus, overtime;

  public:
    void setpara()
    {
	cout << "\nEnter Employee ID :\n";
	cin >> id;
	cout << "\nEnter Employee Bonus :\n";
	cin >> bonus;
	cout << "\nEnter Employee Overtime :\n";
	cin >> overtime;
    }
    void displayreport()
    {
	cout << "\nEmployee with ID " << id << " has received Rs " << bonus << " as bonus and had worked " << overtime << " hours as an overtime in a year.";
    }
};

int main(int argc, char const *argv[])
{
    cout << "A program that displays report." << endl;
    int n;
    cout << "Enter number of employees:" << endl;
    cin >> n;
    int m = n;
    employee obj[n];
    while (n != 0)
    {
	obj[n].setpara();
	n--;
    }
    cout << "Data input Completed. Now streaming report.\n\n\n"
	 << endl;
    while (m != 0)
    {
	obj[m].displayreport();
	m--;
    }
}
