# include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int n,i;
scanf("%d",str);
n=strlen(str)-1;i=0;
while(i<n)
{
temp=str[i];
str[i]=str[n];
str[n]=temp;
i++;n--;
}
printf("%s",str);
}
