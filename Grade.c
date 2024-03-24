#include<stdio.h>
int main()
{
float m,p,c,prec;
printf("enter the marks of maths, physics,and chemistry:\n");
scanf("%f%f%f",&m,&p,&c);
prec=(m+p+c)/3;
if(prec>=80)
printf("o grade\n");
else if(prec<80)
printf("f grade\n");
return 0;
}