include <iostream>
using namespace std;
int main() {
  int money;
  int unitPlace;
  int tenPlace;
  int hundredPlace;
  int thousandPlace;
  std::cout << "your money is:";
  cin >> money;
  int n = money;
  unitPlace = n / 1 % 10;
  tenPlace = n / 10 % 10;
  hundredPlace = n / 100 % 10;
  thousandPlace = n / 1000 % 10;
  cout << thousandPlace << "張一千元\n";
  cout << hundredPlace << "張百元\n";
  cout << tenPlace << "張十元\n";
  cout << unitPlace << "張一元\n";
 

}
