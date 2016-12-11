// 4. Write a program with classes to represent circle, rectangle and triangle. Each classes should have data
// members to represent the actual objects and member functions to read and display objects, find
// perimeter and area of the objects and other useful functions. Use the classes to create objects in your
// program.
#include <iostream>
#include <cmath>
#define pi 3.14

using namespace std;
class circle
{
  private:
    float radius;

  public:
    float perimeter()
    {
	return (pi * 2 * radius);
    }
    float area()
    {
	return pi * radius * radius;
    }
    void setdata()
    {
	cout << "\nSet the value of radius: " << endl;
	cin >> radius;
    }
    void showdata()
    {
	cout << "\nThe perimeter is " << perimeter() << " and area is " << area() << ". \n"
	     << endl;
    }
};
class rectangle
{
  private:
    float length;
    float breadth;

  public:
    float perimeter()
    {
	return (2 * (length + breadth));
    }
    float area()
    {
	return (length * breadth);
    }
    void setdata()
    {
	cout << "\nSet the value of length: " << endl;
	cin >> length;
	cout << "\nSet the value of breadth: " << endl;
	cin >> breadth;
    }
    void showdata()
    {
	cout << "\nThe perimeter is " << perimeter() << " and area is " << area() << ". \n"
	     << endl;
    }
};
class triangle
{
  private:
    float a;
    float b;
    float c;

  public:
    float perimeter()
    {
	return (a + b + c);
    }
    float area()
    {
	return (perimeter() * ((perimeter() - a) * (perimeter() - b) * (perimeter() - c)));
    }
    void setdata()
    {
	cout << "\nSet the value of sides: " << endl;
	cin >> a >> b >> c;
    }
    void showdata()
    {
	cout << "\nThe perimeter is " << perimeter() << " and area is square root of " << area() << ". ;\) \n"
	     << endl;
    }
};

int main(int argc, char const *argv[])
{
    circle c1;
    triangle t1;
    rectangle r1;
    cout << "\nFor Circle:\n";
    c1.setdata();
    c1.showdata();
    cout << "\nFor Rectangle:\n";
    r1.setdata();
    r1.showdata();
    cout << "\nFor Triangle:\n";
    t1.setdata();
    t1.showdata();
}
