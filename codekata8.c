#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    clrscr();
    printf("Input\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Output\n");
    printf("%d",sum);
    getch();
    
}
