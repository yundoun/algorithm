#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    int answer = ( before == after) ? 1 : 0;
    return answer;
}