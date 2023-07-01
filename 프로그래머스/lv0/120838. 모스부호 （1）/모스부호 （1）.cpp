#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> words;
    string tmp = "";
    
    vector<vector<string>> morse;
    morse={ {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
                {"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
                {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
                {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
                {"-.--","y"},{"--..","z"}
                };
    
    istringstream iss(letter);
    while (iss >> tmp){
        words.push_back(tmp);
    }

    for (int i =0; i< words.size(); i++){
        for (int j =0; j< morse.size(); j++){
            if (words[i] == morse[j][0]) { answer += morse[j][1];} 
        }
    }
    
    return answer;
}