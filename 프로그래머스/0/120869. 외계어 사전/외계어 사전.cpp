#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {


    int cnt = 0;
    
    for (int i =0; i<dic.size(); i++){
        int tmp = 0;
            for (int k = 0; k<spell.size(); k++){
                if (string::npos != dic[i].find(spell[k])) tmp++;
                if (tmp == spell.size()) cnt++;
            }
    }
    
    return (cnt != 0) ? 1 : 2;
    
}
