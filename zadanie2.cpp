//Joanna Walkiewicz, Oskar Kowalow

#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n,c,k, space = 1;
  cout << "Podaj liczbe: ";
  cin >> n;

  for (k = 1; k <= n; k++) {
    for (c = 1; c <= space; c++)
      cout << " ";

      space--;

      for (c = 1; c<=2*k-1; c++)
       cout << "*";

      cout << "\n";

  }

return 0;
}
