#include <stdio.h>
int main(){
    int x,y,z,temp;
    scanf("%d,%d,%d",&x,&y,&z);
    if(x<y){ temp =x;x=y;y=temp; }
    if(x<z){ temp =x;x=z;z=temp; }
    if(y<z){ temp =z;z=y;y=temp; }
    printf("%d,%d,%d",x,y,z);
}