//try.c
#include<stdio.h>

#define NAME "Aaron"
#define VERSION_NUMBER 2.0
#define GAME_ID Oxafed3218 //16진법(0x부터 시작하면)
#define PLAYER_KUVES 015 //8진법(0부터 시작하면)

#define ADD_FIVE (i+5)

int main(void) {
	for (int i = 1; i <= 100; i = ADD_FIVE(i) {
		printf("(%d)\tMy name is %s!\n", i, NAME);
	}

	return 0;
}