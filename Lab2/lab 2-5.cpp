#include <iostream>
// Assume that employee will have to pay 10 percent income tax to the government. 
// Ask user to enter the employee salary. 
// Use inline function to display the net payment to the employee by the company.
inline int netPayment(int  salary){
salary=salary+0.1*salary;
return salary;
}

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int sal;
	cout<<"Enter the employee salary:  \n"<<endl;
	cin >> sal;
	cout<< "The salary to be paid is : " <<  netPayment(sal)<<endl;
	cout<< "We did it inline :) "<<endl;	
	return 0;
}