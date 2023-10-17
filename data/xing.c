#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\t");
        for(int k=n;k>i;k--){ printf(" ");}
        for(int j=0;j<(2*i+1);j++){
             printf("*");
        }
        printf("\n");
    }
}