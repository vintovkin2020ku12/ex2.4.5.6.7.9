#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
char* str = getenv(argv[1]);

if(str == NULL){
	printf("%s not found\n", argv[1]);
	exit(1);
}

printf("%s found\n", str);
return 0;
}