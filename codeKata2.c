#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("INPUT:");
  scanf("%d",&a);
  if(a>0)
  {
   if(a%2==0)
   {
     printf("OUTPUT:\n");
     printf("Even");
   }
   else
   {
    printf("OUTPUT:\n");
    printf("Odd");
   }
  else
  {
  printf("OUTPUT:\n");
  printf("invalid");
  }
 }
getch();
}
 
 
