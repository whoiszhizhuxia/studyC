#include <stdio.h>
int main(){
    // 输入三个整数，判断能否构成三角形，能就判断是否等腰【是-输出2，否-输出1】，不能输出0
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>0 && b>0 && c>0){
        switch((a+b)>c&&(a+c)>b&&(b+c)>a){
            case 0:printf("0");break;
            case 1:
                switch (a==b||a==c||b==c)
                {
                    case 0:printf("1");break;
                    case 1:printf("2");break;
                }
                break;
        }
    }
    else{
        printf("erro");
    }
}