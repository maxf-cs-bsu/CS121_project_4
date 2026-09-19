#include <iostream>
#include <cstdlib>
#include <ctime>

const int TRACK=15;
const int AMOUNT_HORSES=5;

void advance(int horseNum, int* horses){
  int coinFlip = rand() % 2; 
  horses[horseNum] += coinFlip;
} // end of advance

void printLane(int horseNum, int* horses){
  for (int i = 0; i < TRACK; i++){
    if (i == horses[horseNum]){
      std::cout << horseNum;
    } else { 
      std::cout << ".";
    }
  }
  std::cout << std::endl;
} // end of printLane

bool isWinner(int horseNum, int* horses){
  if (horses[horseNum] == TRACK){
    return true;
  }
} // end of isWinner

int main(){
  srand(time(NULL));

  int horses[AMOUNT_HORSES] = {0, 0, 0, 0, 0};
  bool keepGoing = true;

  while (keepGoing){
    for (int i = 0; i < AMOUNT_HORSES; i++){
      printLane(horses[i], horses);
      advance(horses[i], horses);
      if (isWinner(horses[i], horses)){
        keepGoing = false;
      }
    }
    std::cout << "Press Enter for next turn: ";
    std::cin.get();
  }
  return (0);
} // end of main
