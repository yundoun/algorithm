#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int>list;
    
    for (int i=0; i<my_string.size(); i++){
        if (isdigit(my_string[i])){list.push_back(stoi(my_string.substr(i,1)));}
    }
    
    for (int i=0; i<list.size(); i++){
        answer+=list[i];
    }
    
    return answer;
}