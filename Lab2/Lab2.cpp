#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, I am going to solve the equation";
	cout << "Ax + B = 0" << endl;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "Solving " << A << "x+" << B << "=0 for x" << endl;
	X = -B/A ;
	cout << "The answer is: " << X << endl;
}