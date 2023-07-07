#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) {
    for (int i = 0; i < my_string.size(); i++) {
        if ('A' <= my_string[i] && my_string[i] <= 'Z') my_string[i] += 32;
        else my_string[i] -= 32;
    }

    return my_string;
}