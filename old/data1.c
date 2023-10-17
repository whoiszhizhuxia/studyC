#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("请输入三个数（逗号隔开）：");
    scanf("%f,%f,%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",s);
    printf("%.2f",area);
}