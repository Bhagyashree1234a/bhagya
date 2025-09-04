#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,n,s=0,rem;
	printf("enter the n value\n");
	
	scanf("%d",&num);
	
}
int fact(int n)
{
int s=0,rem,num;
	n=num;
	while(n!=0)
	{
		rem=n%10;
		s=s+fact(rem);
		n=n/10;
	}
	printf("%d",s);
	if(num==s)
	{
	
	printf("%d is strong number",num,fact(n));
    }
    else
    {
    	printf("%d is not strong number",num,fact(n));
	}
	
}
