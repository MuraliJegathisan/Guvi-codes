#include <stdio.h>

void main()
{
    int n,k,i,j;
    int arr[100],sum=0;
    printf("Input\n");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<k;j++)
    {
        sum=sum+arr[j];
    }
    printf("Output\n");
    printf("%d",sum);
}
