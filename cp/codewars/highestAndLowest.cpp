// Description:
// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

// Examples
// highAndLow("1 2 3 4 5"); // return "5 1"
// highAndLow("1 2 -3 4 5"); // return "5 -3"
// highAndLow("1 9 3 4 -5"); // return "9 -5"
// Notes
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.

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

#include <string>
using namespace std;
string highAndLow(const string& numbers){
  //your code here
  int strLen = numbers.length();
    vector<int> arr;
    for(int i=0; i<strLen; i++){
        char temp = numbers[i];
        if(temp == ' ')
            continue;
        int flag = 0;
        int output = 0;
        if(temp == '-'){
            flag = 1;
            i++;
            if(numbers[i+1] == ' ' || i+1 == strLen){
                temp = numbers[i];
                int num = temp - '0';
                output = output*10 + num;
            }else{
                while(numbers[i+1] != ' ' && i+1 <= strLen){
                    char temp = numbers[i];
                    int num = temp - '0';
                    output = output*10 + num;
                    i++;
                }
                if(i != strLen){
                    char temp = numbers[i];
                    int num = temp - '0';
                    output = output*10 + num;
                }
            }
        }
        if(flag == 1){
            arr.push_back(-output);
            flag = 0;
        }
        else{
            if(numbers[i+1] == ' '){
                temp = numbers[i];
                int num = temp - '0';
                output = output*10 + num;
            }
            else{
                while(numbers[i+1] != ' ' && i+1 <= strLen){
                    char temp = numbers[i];
                    int num = temp - '0';
                    output = output*10 + num;
                    i++;
                }
                if(i != strLen){
                    char temp = numbers[i];
                    int num = temp - '0';
                    output = output*10 + num;
                }
            }
            arr.push_back(output);
        }
    }
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<min)
            min = arr[i];
        if(arr[i]>max)
            max = arr[i];
    }
    string result;
    result = to_string(max);
    result = result + " " + to_string(min);
    return result;
}