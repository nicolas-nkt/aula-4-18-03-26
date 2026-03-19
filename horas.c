#include <stdio.h>
void main() {
    int  x, y;
    int t;
    
    printf("digite suas horas x:");
    scanf("%d" , &x);
        
   printf("digite seus minutos y:");
    scanf("%d", &y);
    
    
    printf(" horas :%d\n minutos:%d\n", x,y);
        
        t=x*60;
        printf("total:%d", t);

}   