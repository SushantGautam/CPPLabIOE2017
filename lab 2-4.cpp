
// Write a function that passes two temperatures by reference 
// and sets the larger of the two numbers to 100 by using return by reference.
#include <iostream>

void tempEvaluate(int &,int &);


using namespace std;


 main(int argc, char const *argv[])
{
	
cout<< "Enter Two temperature followed by enter"<<endl;
int t1,t2;
cin>>t1;
cin>>t2;

cout<<"\nVaues received. . \t \n"<<endl ;
tempEvaluate(t1, t2);
cout<<"\nFinal value:\t"<<t1<<"\t"<<t2<<endl;

}

void tempEvaluate(int & a,int &b )
{
	
    cout<< a<<" "<< b<< "\n" ;  
    if (a >= b) {a=100; 
    	cout<<" First value is greater and is set to 100.";} 
    			else {
    				b=100;
    				cout<<" Second value is greater and is set to 100.";} 
    		}
