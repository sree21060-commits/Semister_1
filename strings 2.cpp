#include<stdio.h>
int main()
{
	char name[10],full_name[20],Address[30];
	printf("Enter your name");
	scanf("%s",name);
	printf("My name is: %s",name);
	printf("Enter your full name:");
	scanf("%[^\n]",full_name);
	return 0;
}
