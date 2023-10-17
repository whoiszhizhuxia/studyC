#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>0){
        if(num%2) printf("%d",num*2);
        else printf("%d",num);
    }
    else printf("error");
}