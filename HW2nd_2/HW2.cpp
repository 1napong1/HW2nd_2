#include<stdio.h>
int main() {
	int a;
	printf("enter integer : ");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("this integer is even");
	}
	else {
		printf("this integer is odd");
	}
	return 0;
}