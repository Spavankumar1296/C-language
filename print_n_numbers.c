#include<stdio.h>

int main()
{
  int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0+i;
printf("%d\t",sum);
i=sum++;
}
return 0;
}