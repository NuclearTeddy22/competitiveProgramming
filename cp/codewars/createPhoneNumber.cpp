// Description:
// Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

// Example
// createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"
// The returned format must be correct in order to complete this challenge.

// Don't forget the space after the closing parentheses!

#include <string>
using namespace std;
string createPhoneNumber(const int arr [10]){
  //your code here
  string str = "";
  str += "(";
  for(int i = 0; i<3; i++){
    char ch = '0' + arr[i];
    str += ch;
  }
  str += ")";
  str += " ";
  for(int i=3; i<6; i++){
    char ch = '0' + arr[i];
    str += ch;
  }
  str += '-';
  for(int i=6; i<10; i++){
    char ch = '0' + arr[i];
    str += ch;
  }
  return str;
}