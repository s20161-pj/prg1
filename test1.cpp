#include <iostream>
using std::cout;
using std::cin;

int main() {
	int *i;
	int j = 123;
	i = &j;
	cout << &j << "\n";
	cout << *i;
	return 0;
}
