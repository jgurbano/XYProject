#include "stdio.h"
#include "123.c"

char* test();
int tester();

int main2(){
	return 0;
}


int tester()
{
	char* p =test();
	return (int)*p;
}
