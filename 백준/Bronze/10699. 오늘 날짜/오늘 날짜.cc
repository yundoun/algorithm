#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	time_t timer = time(NULL);
	struct tm* t;

	t = localtime(&timer);

	printf("%2d-%02d-%2d", t->tm_year + 1900, t->tm_mon+1, t->tm_mday);

}