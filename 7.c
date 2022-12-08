#include<stdio.h>
#include<stdlib.h>

extern char **environ;

int main(int argc, char** argv){
	if(argc != 2){
		printf("Enter NAME ENVIROMENT VARIBLE");
		return 0;
	}

	if(unsetenv(argv[1]) != 0){
		printf("ENVIROMENT NOT FOUND!!!");
		clearenv();
		return 0;
	}

	for(int i = 0; environ[i] != NULL; i++){
		printf("%s\n", environ[i]);
	}

return 0;
}