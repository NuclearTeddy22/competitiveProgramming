// Description:
// Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

// Examples:

// "Hey fellow warriors"  --> "Hey wollef sroirraw" 
// "This is a test        --> "This is a test" 
// "This is another test" --> "This is rehtona test"

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
#include <stack>

using namespace std;

string spinWords(const string &str)
{
  int strLen = str.length();
    string tempString = str;
    int start = 0;
    for(int i=0; i<=strLen; i++){
        if(i == strLen || tempString[i] == ' '){
            if(i-start >= 5){
                reverse(tempString.begin()+start, tempString.begin()+i);
            }
            start = i+1;
        }
    }
    return tempString;
}// spinWords