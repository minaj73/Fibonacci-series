#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=1,no2=0,no3=0,count=0;
    printf("\n enter count for fibonacci series ");
scanf("%d",&count);
printf("fibonacci series=");
    while(count>0)
    {
      printf("%d\t",no3);
      no3=no1+no2;
      no1=no2;
      no2=no3;
      count--;
    }
    getch();
    return 0;
}
