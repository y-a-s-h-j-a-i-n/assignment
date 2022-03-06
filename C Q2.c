#include<stdio.h>
float marks(int x, int y, int z)
{
float e;
e=(x+y+z)*100/300.0;
return e;
}
int main()
{
int a,b,c;
float e;
printf("enter marks of subject 1, 2 and 3:");
scanf("%d %d %d",&a,&b,&c);
e=marks(a,b,c);
printf("percentage score by you is %f\n",e);
}