#include <stdio.h>
void data_1(){
    int sum=1;
    for(int i=1;i<=20;i++){
        if(i%2!=0){
            sum = sum*i;
        }
    }
    printf("%d\n",sum);
}
void data_2(){
    int num = 7,i=1,sum=0;
    while((num*i)<50){
        sum = sum +num*i;
        i=i+1;
    }
    printf("%d",sum);
}
void data_3(){
    int num = 1,sum=0,numj=1;
    do{
        numj =num*numj; 
        sum = sum + numj;
        num=num+1;
    }
    while(num<=10);
    printf("%d\n",sum);
}
void data_4(){
    float gongzi = 1600;
    int i=1;
    while (i<=5)
    {
       gongzi = gongzi+gongzi*0.03;
       i=i+1;
    }
    printf("%.2f",gongzi);
}
void data_5(){
    int num = 1,g=2*3*5;
    while (num<=100)
    {
        if(num%g==0) printf("%d\t",num);
        num =num+1;
    }
}
void data_6(){
    int n,i;
    printf("number is :");
    scanf("\n%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(n==i) printf("yes");
    else printf("no");
}
void data_7(){
    int m,n;
    printf("max-number is :");
    scanf("\n%d",&n);
    printf("min-number is :");
    scanf("\n%d",&m);
    for(;m<=n;m++){
        int i;
        for(i=2;i<m;i++){
        if(m%i==0)
            break;
        }
        if(m==i) printf("yes--%d\n",m);
        // else printf("no");
    }
}
void data_8(){
    int n;
    printf("sum is:");
    scanf("\n%d",&n);
    for(int i=0;i<n;i++){
        int x,y,z;
        printf("san bian chang wei :\n");
        scanf("%d,%d,%d",&x,&y,&z);
        if(x>0 && y>0 && z>0){
            switch((x+y)>z&&(x+z)>y&&(y+z)>x){
                case 0:printf("no san jian\n");break;
                case 1:printf("yes\n");break;
            }
        }
        else break;
    }
}
int main(){
    data_8();
    return 0;
}