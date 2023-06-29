#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    vector<int> e(emergency.size());
    copy(emergency.begin(), emergency.end(), e.begin()); // 벡터 복사
    
    sort(e.begin(), e.end(), greater<>()); // 내림차순 정렬
    
    for (int i =0; i<emergency.size(); i++){ // 내림차순 정렬한 벡터의 인덱스가 emergency의 응급도 순서
        int tmp = 0;
        tmp = find(e.begin(), e.end(), emergency[i]) - e.begin();
        answer.push_back(tmp+1);
    }
    
    return answer;
}