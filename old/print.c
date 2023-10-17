#include<stdio.h>
int jian(int x,int y){
    int z;
    z = x - y;
    return(z);
}
main()
{
    printf("****************************\n");
    printf("\n");
    printf("\t Welcome to C! \t\t\n");
    printf("\n");
    printf("****************************\n");
    int a,b,num;
    printf("two numbers:");
    scanf("%d,%d",&a,&b);
    num = jian(a,b);
    printf("num:%d\n",num);
    getchar();
    return 0;
}