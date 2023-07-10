#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> list(26);
    
    for (int i=0; i<s.size(); i++){
        char tmp = s[i];
        list[tmp-'a']++;
    }
    
    for (int i =0; i<26; i++){
        if (list[i] == 1) answer+=(i+'a');
    }
    
    
    return answer;
}