#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char text[1000], r_text[1000];
int n;


void reverseString();
int main()
{
	char *p1, *p2;
	int i=1,count = 0;
	printf("Input: ");
	scanf("%s%n",text,&n);
	//n=number_string();
	reverseString();
	p1 = text;
	p2 = r_text;
	while(*p1==*p2&&i<=n)
	{
		p1++;
		p2++;
		count += 1;
		i++;
	}
	if (count == n)
	{
		printf("Output: Palindrome\n");
	}
	else
	{
		printf("Output: Not Palindrome\n");
	}
}

void reverseString()
{
	int i,j;
	j = n-1;
	for (i = 0; i < n; i++)
	{
		r_text[i] = text[j];
		j--;
	}
}