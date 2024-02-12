#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    vector<vector<int>> v;
    
    for (int n = i; n <= j; n++){
        vector<int> temp;
        int num = n;
        while (num > 0) {
            temp.push_back(num % 10);
            num /= 10;
        }
        v.push_back(temp);    
    }
    
    for (int m = 0; m < v.size(); m++){
        for (int t = 0; t < v[m].size(); t++){
            if (v[m][t] == k) answer++;
        }
    }
    
    return answer;
}
