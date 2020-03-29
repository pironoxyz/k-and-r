#include <iostream>
#include <string>

enum VendingMachineState { SELECT, QUANTITY, CALCULATE, UPDATE };

enum Brand { COKE = 100, PEPSI = 100, TARHUN = 999 };

struct Customer {
  std::string name;
  int points;
};

struct Soda {
  Brand brandName;
  int inventory;
  int price;
};

int main(void) {
  using namespace std;

  return 0;
};
