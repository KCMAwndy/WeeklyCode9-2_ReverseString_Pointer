#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char Str[99] = {'\0'};
	char reverseStr[99]= {'\0'};
	char* strPtr = Str;
	char* reversePtr = reverseStr;
	printf("Pointer : Print a string in reverse order :\n");
	printf("-------------------------------------------\n");
	printf("Input a string : ");
	scanf("%[^\n]s", Str);
	//printf("\n%s", Str);
	//printf("\n%d", strlen(Str));
	int i, j;
	for (i = 0, j = strlen(Str)-1 ; i < (int)strlen(Str); i++, j--) {
			*(reversePtr + i) = *(strPtr + j);
	}
	printf("Reverse of the string is : %s", reverseStr);
	return 0;
}