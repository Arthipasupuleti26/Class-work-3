#include<stdio.h>
int findcube(int num)
{
	return num*num*num;
}
int main()
{
	int num,cube;
	printf("ENTER ANY VALUE:");
	scanf("%d",&num);
	cube=findcube(num);
	printf("cube of the given number is %d",cube);
	return 0;
}
