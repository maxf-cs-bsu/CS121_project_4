# Procedural Horse Race
```
const int TRACK = 15

coin = random value between 1 and 0

void advance(int horseNum, int* horses);
  flip a coin and add result to horseNum position (1 = move, 0 = don't move)

void printLane(int horseNum, int* horses);
  check horses position going character by character
  for each character in horses
    if character == horseNum position
      print horseNum
    else
      print a "."
  

bool isWinner(int horseNum, int* horses);
  if horseNum position == TRACK
    return true; // or some other way to say to finished
  else
    do nothing at all
      

main();
  make and array horses[] with the 5 horses displayed with numbers
  
  set a keepGoing value to True
  while keepGoing;
    run through each horseNum's array;
      advance()
      printLane()
      if isWinner() returns True;
        set keepGoing to False;
    get user input for each round
```
