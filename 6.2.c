#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void print_env(char* str){
        char* env = getenv(str);
        if(env == NULL){
                printf("%s not find", str);
                exit(1);
        }
        printf("%s = %s\n", str, env);
}

int main(int argc, char** argv){

if(argc != 3){
	printf("You need enter 3 arguments\n");
	printf("1: NAME ENVIROMENT VARIBLE\n 2: VARIBLE");
	return 0;
}

char* str = (char*)malloc(30 * sizeof(char));
if(str == NULL) return 0;
print_env(argv[1]);
strcpy(str, argv[1]);
strcat(str, "=");
strcat(str, argv[2]);
if(putenv(str) != 0) return 0;
print_env(argv[1]);

free(str);
return 0;
}