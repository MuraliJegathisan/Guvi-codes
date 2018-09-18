#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("INPUT\n");
scanf("%d",&a);
if(a>0)
{
 printf("OUTPUT\n");
 printf("POSITIVE");
 }
else if(a==0)
{
 printf("OUTPUT\n");
 printf("ZERO");
 }
else
{
 printf("OUTPUT\n");
 printf("NEGATIVE");
 }
getch();
}
