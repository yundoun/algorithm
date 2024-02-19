#include <iostream>
#include <string>
using namespace std;
int solution(int n) {
    int answer = 0;
    for (int i =1; i<=n; i++){
        string N = to_string(i);
        if (N.find("3") != string::npos || i%3 == 0) n++;
        answer = i;
    }
    
    return answer;
}