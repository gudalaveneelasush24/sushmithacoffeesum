#include<stdio.h>
#include<conio.h>
int main{
int X,P,Total_Cost;
scanf("%d %d",&X,&P);
while(X>0)
{
Total_Cost=Total_Cost+X;
X=(P*X)/100;
}
printf("%d",Total_cost);
return 0;
}

