#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> dots) {
    int x, y = 0;
    int max = -256;
    int min = 256;
    for (int i =0; i<4; i++){
        for (int j =0; j<2; j++){
            if (dots[i][0] > max ) max = dots[i][0];
            if (dots[i][0] < min ) min = dots[i][0];
        }
    }
    x = max - min;
    max = -256;
    min = 256;
    for (int i =0; i<4; i++){
        for (int j =0; j<2; j++){
            if (dots[i][1] > max ) max = dots[i][1];
            if (dots[i][1] < min ) min = dots[i][1];
        }
    }
    y = max - min;
    return x*y;
}