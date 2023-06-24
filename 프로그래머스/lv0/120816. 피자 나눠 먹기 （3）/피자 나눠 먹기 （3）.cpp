#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
 for (int i=0; i<100; i++){
    if ((slice * i) / n >= 1)  {return i;}
 }
}