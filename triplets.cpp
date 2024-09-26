#include <stdio.h>

int main(){
    int a0,a1,a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0,b1,b2; 
    int x = 0;
    int y = 0;
    scanf("%d %d %d",&b0,&b1,&b2);
    if (a0 > b0)
        x++;
    else if (a0 < b0)
        y++;
    else{}

    if (a1 > b1)
        x++;
    else if (a1 < b1)
        y++;
    else {}

    if (a2 > b2)
        x++;
    else if (a2 < b2)
        y++;
    else {}
    
    printf("%d %d",x,y);            
    return 0;
}
