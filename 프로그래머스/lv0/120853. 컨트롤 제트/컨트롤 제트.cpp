#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    string str;
    vector<string> v;
    
    istringstream ss(s);
    
    while(getline(ss, str, ' ')){
        v.push_back(str);
    }
    
    for (int i=0; i<v.size(); i++){
        if (v[i] == "Z"){answer -= stoi(v[i-1]);}
        else answer += stoi(v[i]);
    }
    
    
    return answer;
}