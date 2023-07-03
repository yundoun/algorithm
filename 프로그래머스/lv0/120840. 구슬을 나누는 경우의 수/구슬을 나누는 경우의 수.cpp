#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    unsigned long long result = 1;

    for (int i = 1; i <= share; i++) {
        result *= balls--;
        result /= i;
    }

    return result;
}