#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
int solution(string my_string) {
    int answer = 0;
    char c;
    int num, size;
    // ex = "3 + 4"
    stringstream sst1(my_string); // int answer = 3
    sst1 >> answer;
    
    size = to_string(answer).size()+1;
    cout << size;
    my_string = my_string.substr(size); // my_string = "+ 4"
    
    stringstream sst(my_string);
    while(sst >> c >> num){
        if (c == '+'){
            answer = answer + num;
        }
        else
            answer = answer - num;
    }
    
    
    return answer;
}