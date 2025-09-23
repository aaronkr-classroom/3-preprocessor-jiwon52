//hw.c
#include<stdio.h>

int main(void) {
	int data = 5;
	int result = 0;

	printf("data % 2 = %d", data % 2);
	printf("data < 5 = %d", data < 5);
	printf("data < 4 + 3 = %d", data < 4+3);
	printf("data++ + 2 = %d", data++ +2);
	printf("data == 5 = %d", data == 5);
	printf("data |= 5 && (data = 0) = %d", data |= 5 && (data = 0));
	printf("--result&&(data=0) = %d", --result && (data = 0));
	printf("result-- &&(data = 0) = %d", result-- && (data = 0));
	printf("result--||(data = 0) = %d", result-- || (data = 0));

	return 0;


}