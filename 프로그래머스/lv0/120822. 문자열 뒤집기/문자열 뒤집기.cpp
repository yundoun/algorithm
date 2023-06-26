#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    int size = my_string.size();
    for (int i=0; i<size; i++){
        answer.push_back(my_string.back());
        my_string.pop_back();
    }
    
    
    return answer;
}