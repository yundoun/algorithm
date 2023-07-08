#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    char tmp;
    tmp = my_string[num1];
    my_string.replace(num1, 1, 1, my_string[num2]);
    my_string.replace(num2, 1, 1, tmp);
    
    return my_string;
}