#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> list = { 'a', 'e', 'i' ,'o', 'u'};
    
    for (int i =0; i<my_string.size(); i++){
        for( int j =0; j<list.size();j++){
            if (find(list.begin(), list.end(), my_string[i]) == list.end() ){
                answer.push_back(my_string[i]);
                break;
            }
        }
    }
    
    return answer;
}