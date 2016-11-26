#include <iostream>


using namespace std;

namespace square
{
	int num;
	int func(int);
	int func(int a)
	{
		return a*a;
	}
	
	
}
namespace cube
{
	int num;
	int func(int);
	int func(int a)
	{
		return a*a*a;
	}
	
	
}
using namespace square;
using namespace cube;


 main(int argc, char const *argv[])
{
	
	cout<< "\nEnter Lenght Vale of cube"<< endl;
	cin>> cube:: num;
	cout<< "\nNow printing the value from function with one argument int.\t" <<	cube:: func(cube::num);
	cout<< "\nEnter Lenght Vale of sq."<< endl;
	cin>> square:: num;
	cout<< "\nNow printing the value from function with  argument int.\t" <<	square:: func(square::num);

	
	
}

