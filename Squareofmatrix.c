#include<stdio.h>

int main()
{
int row,col,a[2][2];
for(row=0;row<2;row++)
{
 for(col=0;col<2;col++)
 {
  scanf("%d",&a[row][col]);
 }
}
for(row=0;row<2;row++)
{
printf("\n ");
 for(col=0;col<2;col++)
 {
  printf("%d ",a[row][col]*a[row][col]);
 }
}
return 0;
}