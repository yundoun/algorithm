#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> tmp;
    int cnt = 0;
    for (int i=0; i<num_list.size();i ++){
        tmp.push_back(num_list[i]);
        cnt++;
        if (cnt == n){
            answer.push_back(tmp);
            tmp.clear();
            cnt = 0;
        }
    }
    
    return answer;
}