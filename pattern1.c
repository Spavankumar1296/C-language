#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      printf("\n");
      for(int j=0;j<(n-i);j++)
      {
        printf("*");
      }
    }
    for(int i=1;i<n;i++)
    {
      printf("\n");
      for(int j=0;j<(i+1);j++)
      {
       printf("*");
      }
    }
    return 0;
}