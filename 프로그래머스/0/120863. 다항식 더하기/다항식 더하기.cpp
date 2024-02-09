#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream sst(polynomial);
    vector<string> v;
    string tmp;
    
    int x = 0, y = 0;
    
    while(sst >> tmp){
       v.push_back(tmp);
    }
    
    for (int i =0; i<v.size();i++){
        if (v[i][v[i].size() -1] == 'x'){
            if(v[i].size() == 1) x+=1;
            else x+=stoi(v[i].substr(0,v[i].size()-1));
        }
        else if (v[i] == "+") continue;
        else y+= stoi(v[i]);
    }
    
    if (x != 0) {
        if(x==1) answer +="x";
        else answer+= to_string(x) + "x";
    }
    
    if (y!=0){
        if(answer != "") answer+=(" + " + to_string(y));
        else answer += to_string(y);
    }
    return answer;

}