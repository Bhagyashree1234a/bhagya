#include<stdio.h>
int main()
{
	int n,num,rem,rev=0;
	scanf("%d",&num);
	num=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rem*10+rem;
		n=n/10;

		
	}
	if(num==rev)
	{
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is not palinadrome");
	}
}
