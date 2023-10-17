#include <stdio.h>
void data_1(){
    int n,j;
    printf("sum:");
    scanf("\n%d",&n);
    for(int i = 0;i<n;i++){
        int num;
        printf("Input:");
        scanf("\n%d",&num);
        if(num>0) j+=1;
    }
    printf("%d",j);
}
void data_2(){
    for(int i=0;i<4;i++){
        printf("\n");
        printf("\t");
        int j =0;
        while(j<7){
             printf("* ");
             j+=1;
        }  
    }
}
void data_3(){
    int i=0;
    while (i<4)
    {
      int j=0,z=4-i;
      printf("\n");
      printf("\t");
      do{
        printf(" ");
        z-=1;
      }while(z>0);
      do{
        printf("* ");
        j+=1;
      }while(j<7);
      i+=1;
    }
}
int main(){
    int i=1;
    do{
        printf("\n\t");
        for(int z=(4-i);z>0;z--){printf(" ");}
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        i+=1;
    }while(i<=4);
    return 0;
}