#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x=0, y = 0;
    for (int i = 0; i < keyinput.size(); i++) {
        int tmpx = x;
        int tmpy = y;
        if (keyinput[i] == "left") x -= 1;
        if (keyinput[i] == "right") x += 1;
        if (keyinput[i] == "up") y += 1;
        if (keyinput[i] == "down") y -= 1;
        if (abs(x) >(board[0] - 1) / 2) x = tmpx;
        if (abs(y) >(board[1] - 1) / 2) y = tmpy;
    }
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}