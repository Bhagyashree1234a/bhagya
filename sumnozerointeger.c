#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int haszero(n)
{
	while(n!=0)
	{
		if(n%10==0)
		{
			return 1;
		}
		n=n/10;
	}
	return 0;
	
}
int* sumtonozeroint(int n,int* returnsize)

{
	*returnsize=2;
	int* p=(int*)malloc(*returnsize*sizeof(int));
	int i,j;
	for(i=n-1;i>=1;i--)
	{
		j=n-i;
		if(!haszero(i)&&!haszero(j))
		{
			*(p)=i;
			*(p+1)=j;
			return p;
		}
	}
	return NULL;
}
int main()
{
	int n,size;
	printf("enter the n value");
	scanf("%d",&n);
	int* ans=sumtonozeroint( n,&size);
	if(ans!=NULL)
	{
		printf("%d:[%d %d]\n",n,ans[0],ans[1]);
		free(ans);
	}
	return 0;
}

