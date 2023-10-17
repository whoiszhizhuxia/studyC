#include <stdio.h>
int main(){
    int num,g,s,b;
    scanf("%d",&num);
    b = num/100;
    s = (num-b*100)/10;
    g = (num-b*100-s*10);
    printf("%d,%d,%d",b,s,g); 
}