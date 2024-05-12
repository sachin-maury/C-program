#include <stdio.h>
int main()
{
int a,b;
char result;
scanf("%d",&a);
result=(a>=18)?'Y':'N';
if(result=='Y')
{
printf("YOU ARE ELIGIBLE FOR VOTER ID\n");
}
else
{
printf("YOU ARE NOT ELIGIBLE FOR VOTER ID\n");
}
return 0;
}