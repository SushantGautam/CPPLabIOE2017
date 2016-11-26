// Write a program using the function overloading that converts feet to inches. 
// Use function with no argument, one argument and two arguments. 
// Decide yourself the types of arguments. Use pass by reference in any one of the function above. 
#include <iostream>
int data;

  using namespace std;
void func();
void func(int);
void func(int, int);

void func(){
	cout << "\n The output will be: \t " << (float) data * 12 << endl;
}

void func(int a) {
  cout << "\n The output will be: \t " << (float) a * 12 << endl;
}
void func(int a, int b) {
  cout << "\n The output will be: \t " << (float) a * 12 << endl;
}

int main(int argc, char
  const * argv[]) {
  /* code */
  int n = 0;
  cout << "Welcome to CPP.\n Enter Details:\n " << endl;
  cout << "Enter Vale of feet:\n" << endl;
  cin >> data;
    cout << "\nNow printing the value from function with no argument int.\t";
  func();
  cout << "\nNow printing the value from function with one argument int.\t";
  func(data);
  cout << "\nNow printing the value from function with two argument int.\t";
  func(data, n);

}