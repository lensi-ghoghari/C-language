#include<stdio.h>
#include<conio.h>
main()
{
   int b,h,d,t,ans;
   clrscr();
   printf("please enter the base salary:");
   scanf("%d",&b);
   printf("please enter the HRA :");
   scanf("%d",&h);
   printf("please enter the DA");
   scanf("%d",&d);
   printf("please enter the TA");
   scanf("%d",&t);
   ans = b+ (b * h/100)+ (b * d/100)+ (b * t/100);
   printf("gross salary is :%d",ans);
   getch();
}