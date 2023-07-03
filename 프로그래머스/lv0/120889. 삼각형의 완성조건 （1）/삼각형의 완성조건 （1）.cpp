#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = *max_element(sides.begin(), sides.end());
    int index = max_element(sides.begin(), sides.end()) - sides.begin();
    
    for (int i=0; i<3; i++){
        if (i != index) { answer+=sides[i]; }
    }
    if  (max < answer) { return 1;}
    else return 2;
    
}