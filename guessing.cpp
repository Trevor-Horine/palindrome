/*This is a guessing game the computer picks a number and you get to guess it will
 * tell you if you are to high or to low
 *Trevor Horine
 *9/13/17
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
  // varables
  int guess = -1;
  int num;
  bool stillplaying = true;
  char answer;
  srand (time(NULL));
  //allows to play more than once
  while(stillplaying == true) {
    cout<<"Guess a number between 1 and 100!\n";
    int attempts = 0;
    //pick random number
    num = rand() % 100 +1;
    //continue till guess is the same as random num
    while(num != guess){
      cin>> guess;
      attempts = attempts +1;
      //if guess is low
      if(guess<num){
	cout<< "Guess is to low!\n";
      }
      //if guess is high
      else if(guess>num) {
	cout<< "Guess is to high!\n";
      }
    }
    //when you win
    cout<< "You win it took you " <<  attempts << " tries to guess the number!\n"; 
    cout<< "Do you want to play again? (y for yes. n for no.)\n";
    cin>> answer;
    //play again
    if (answer == 'y') {
      stillplaying = true;
    }
    //quit
    else {
      stillplaying = false;
    }
  }
}
