#include<stdio.h>
#include<stdlib.h>



int main(int argc, char** argv){
	int overwrite = 1;
	if(argc < 3){
		printf("we need 2 arguments");
		return 0;
	}
	if(setenv(argv[1], argv[2], overwrite) != 0){
		printf("setenv not set %s\n", argv[1]);
		return 0;
	}
	printf("%s = %s\n", argv[1], getenv(argv[1]));
return 0;
}