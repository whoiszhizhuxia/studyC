#include<stdio.h>
int add(int x,int y)
{
    int z;
    z = x + y;
    return(z);
}
main()
{
    int a,b,sum;
    printf("input two number:");
    scanf("%d,%d",&a,&b);
    sum = add(a,b);
    printf("sum=%d\n",sum);
    
}
