/*This program read in a word or words and will tell you if it is or is not a palindrome
 *Trevor Horine
 *9/18/17
 */
#include <iostream>
#include <string.h>
using namespace std;
int main() {
  //varables
  char str[81];
  char str2[81];
  int len;
  int count = 0;
  int count2 = 0;
  // ask user to input word or words
  cout << "Input something to check if it is a palindrome\n";
  cin.getline(str, 81);
  //change to lowwercase
  for (int i = 0; i < 81; i++){
    str[i] = tolower(str[i]);
  }
  //remove spaces and punctuartion
  for(int i = 0; i < 81;i++){
    if ((str[i] != ' ') && (ispunct(str[i]) == false)){
      str2[count] =  str[i];
      count++;
    }
  }
  len = strlen(str2);
  strcpy (str, str2);
  count2 = len;
  //revese a copy to check if palindrome
  for(int i = -1; i < len; i++){
    str2[count2] = str[i];
    count2--;
  }
  //tell results
  if (strcmp (str, str2) == 0){
    cout << "Palindrome" << endl;
  }
  else{
    cout << "Not a palindrome" << endl;
  }
}     
