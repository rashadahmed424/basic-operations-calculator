#include<iostream>
using namespace std;
float calc(float x, float y,string z);
int main()
{
	float x, y;
	string z;
	cout << " Enter x \n";
	cin >> x;
	cout << "Enter the sign of the operation\n ";
	cin >> z;
	cout << "Enter y\n";
	cin >> y;
	cout << " Result : " << calc(x, y, z)<<endl;

}
float calc(float x, float y,string z) {
	if (z == "+") {
		return x + y;
	}
	else if (z == "-") {
		return x - y;
	}
	else if (z == "*") {
		return x * y;
	}
	else
		return x / y;
}