//Joanna Walkiewicz


#include <iostream>

int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  int i;
  cout << "Podaj liczbe: ";
  cin >> i;

  for (i; i >= 0; i--) {
    cout << i;
    cout<<endl;
  }
  return 0;
}
