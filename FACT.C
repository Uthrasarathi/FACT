#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,fact=1;
printf("Enter the factorial number;");
scanf("%d",&n);
for(a=1;a<=n;a++)
fact=fact*a;
printf("%d=%d\n",n,fact);
getch();
}
