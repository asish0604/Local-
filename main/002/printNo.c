#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int N;
	if (argc != 2){
		printf("Usage: %s <N>\n", argv[0]);
		return 1;
	}
	N = atoi(argv[1]);

	for(int i=1; i<=N ; i++){
		printf("%d", i);
	}
	printf("\n");

	return 0;
}

