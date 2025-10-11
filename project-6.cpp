#include <iostream>
using namespace std;

enum class OrderInfo {
  PENDING = 5,
  COMPLETED = 10,
  CANCEL,
  DESTROYED,
};
int main() {
  OrderInfo order1 = OrderInfo::PENDING ;
  return 0;
}