
#include <iostream>
using namespace std;

int main(){

	int a = 10;
	int *ptr = &a;

	cout << "Address of the pointer in memory: " << &ptr << "\n";
	cout << "Address that the pointer points to: " << ptr << "\n";
	cout << "Value that the pointer points to: " << *ptr << "\n";

}
