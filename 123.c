#include "stdio.h"
#include "stdlib.h"
char* test(){
	char* p = NULL;
	*p = 'a';
	*p = 'b';
	return p;
}
