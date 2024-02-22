#include <iostream>

using namespace std;

int main(){

  int a = 100;
  int b = 200;
  int temp = a;
  a = b;
  b = temp;

  std::cout << a;
  return 0;
}