#include <stdio.h>

int main()
{
    int y;
    printf("Input:\n");
    scanf("%d",&y);
    printf("Output:\n");
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
      printf("Yes");
    else
      printf("No");
    return 0;
}

