// Write a program to set a structure to hold a date 
// (mm,dd and yy), assign values to the members of the structure and print out t
// he values in the format 11/28/2004 by function. Pass the structure to the function
#include <iostream>
struct date
{
	int year, month, day;
} a,b;


using namespace std;
void prin(date);

void prin(date b )
{
cout <<"\nPrinting Data of structure passed to another function.";

	cout<< "\nDate:"<< endl;
	cout<< a.year<<"/"<< a.month<< "/"<<a.day<<"\n"<<endl;
}


int main(int argc, char const *argv[])
{
	/* code */
	cout<< "Welcome to CPP.\n Enter Details:\n " <<endl;
	cout<< "\nYear:"<< endl;
	cin>> a.year;
		while ( a.year>=2017||a.year<=1990) 
		{
		cout<<"\nCan't be:\n reenter year:\n"; 
		cin>> a.year;
		}
	cout<< "Month:"<< endl;
	cin>> a.month;
	cout<< "Day:"<< endl;
	cin>> a.day;
	prin(a);

	return 0;
}
