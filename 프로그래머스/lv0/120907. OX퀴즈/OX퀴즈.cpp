#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int num1, num2, num3;
    char op1, op2;
    
    for (int i =0; i<quiz.size(); i++){
        istringstream iss(quiz[i]);
        while ( iss >> num1 >> op1 >> num2 >> op2 >> num3){
            if (op1 == '+'){
                if (num1 + num2 == num3) {answer.push_back("O");}
                else answer.push_back("X");
            }
            else{
                if (num1-num2 == num3) {answer.push_back("O");}
                else answer.push_back("X");
            }
        }
    }
    
    return answer;
}