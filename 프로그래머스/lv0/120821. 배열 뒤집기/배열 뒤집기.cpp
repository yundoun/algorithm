#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int size = num_list.size();
    for (int i=0; i<size; i++){
        int tmp = num_list.back();
        num_list.pop_back();
        answer.push_back(tmp);
    }

    return answer;
}