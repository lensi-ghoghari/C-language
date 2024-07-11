
#include<stdio.h>
#include<conio.h>

main()
{
       int r;
       const float pi = 3.14;

clrscr();

printf("Ente the value of r : ");
scanf ("%d",&r);

printf("The radius of circle :");
printf("%f * %d * %d = %.2f" , pi,r,r, pi*r*r);
getch();

}















