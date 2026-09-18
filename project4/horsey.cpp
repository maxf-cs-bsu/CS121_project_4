#include <iostream>
#include <cstdlib>
#include <ctime>

const int TRACK=15;

void advance(int horseNum, int* horses){
  horseNum++;

} // end of advance

void printLane(int horseNum, int* horses){
  for (i = 0; i < TRACK; i++){
    if horses[i] == horseNum{
      std::cout << horseNum;
    } else { 
      std::cout << ".";
    }
  }
} // end of printLane

void isWinner(int horseNum, int* horses){
} // end of isWinner

void coinFlip(){
  srand(time(NULL));
  int coin = rand() % 2;

  std::cout << coin << std::endl;
} // coin flip end

int main(){
  
  int horses[5];
  int horseNum = 0;

  bool keepGoing = true;

  while (keepGoing);
    for (i = 0; i < horses; i++){
      advance(horseNum, &horses);
      printlane(horseNum, &horses);
      if isWinner(horseNum, &horses) == true{
        keepGoing = false;
      }
      std::cout << "Press Enter for the next turn: ";
      std::cin >> userInput;

  return (0);
} // end of main
