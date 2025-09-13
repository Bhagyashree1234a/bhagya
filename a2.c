#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,n,s=0,rem,count=0;
	printf("enter the n value\n");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{   n=n/10;
	     count++;
		
	}
	n=num;
	while(n!=0)
	{
		rem=n%10;
		s=s+pow(rem,count);
		n=n/10;
	}
	if(num==s)
	{
		printf(" %d is armstrong",num);
	}
	else
	{
		printf("%d is not armstrong",num);
	}
	return 0;
}
