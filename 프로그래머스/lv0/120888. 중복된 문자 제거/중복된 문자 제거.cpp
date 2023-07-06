#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> str;
    for (int i =0; i<my_string.size(); i++){
       if (find(str.begin(), str.end(), my_string[i]) == str.end()){
           answer += my_string[i];
       }
        str.push_back(my_string[i]);
    }
    
    
    return answer;
}