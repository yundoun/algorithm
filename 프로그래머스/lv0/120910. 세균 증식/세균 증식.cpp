#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int i=0;
    while(i<t){
        n *= 2;
        i++;
    }
    return n;
}