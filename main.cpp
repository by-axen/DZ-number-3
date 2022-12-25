#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* https://github.com/by-axen/DZ-number-3 */

int main()
{
	int login,parol;
	printf("login=");
	scanf("%i",&login);
	printf("parol=");
	scanf("%i",&parol);
	if(((login==111)&&(parol==111))||((login==222)&&(parol==222)))
	{
		printf("OK");
	}
	else
	{
		printf("Poprobuy zanovo");
	}
}
