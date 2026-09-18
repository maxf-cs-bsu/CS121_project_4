#include <iostream>
#include <cstdlib>
#include <ctime>

const int TRACK=15;
const int SIZE=5;

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

  int horses[SIZE] = {0};
  bool keepGoing = true;

  for (int i = 0; i < 5; i++){
    printLane(horses[i], horses);
    advance(horses[i], horses);
  }
  return (0);
} // end of main
