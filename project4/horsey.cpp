#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

  srand(time(NULL));
  int coin = rand() % 2;

  std::cout << coin << std::endl;

  return 0;
} // placeholder cointest
