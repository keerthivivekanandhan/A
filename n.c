#include <stdio.h>
int main(void)
{
	int sum=1,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("factorial no is:%d",sum);
return 0;
}
