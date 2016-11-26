// Write a program that displays the current monthly salary of chief executive 
// officer, information officer, and system analyst, programmer 
// that has been increased by 9, 10, 12, and 12 percentages respectively 
// in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make function that takes two arguments; one salary and other increment. 
// Use proper default argument.
using namespace std;

int netPayment(int  salary, int increment ){
	int out =(salary+increment*salary/100);
return  out;
}

#include <iostream>
int main(int argc, char const *argv[])
{
	/* code */
	cout<< "The final output::"<<endl;
	cout<< "The final salary of Chief executive officer : "<< netPayment(35000, 9)<< "\n"<<endl;
		cout<< "The final salary of Information offi : "<< netPayment(25000, 10)<< "\n"<<endl;
			cout<< "The final salary of System analyst  : "<< netPayment(24000, 12)<< "\n"<<endl;
				cout<< "The final salary of Programmer : "<< netPayment(18000, 12)<< "\n"<<endl;
	return 0;
}
