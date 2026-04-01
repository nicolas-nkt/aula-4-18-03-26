#include <stdio.h>
int main() {
    int  x, y;
    int t;
    
    printf("digite suas horas x:");
    scanf("%d" , &x);
        
   printf("digite seus minutos y:");
    scanf("%d", &y);
    
    
    printf(" horas :%d\n minutos:%d\n", x,y);
        
        t=x*60 +x;
        printf("total em minutos: %d\n", t);
        
         if(t < 480){
            printf("faltam %d minutos para 480", 480 - t);
        }else{
            printf("voce ja alcançou ou passou 480 minutos\n"); 
            }
            return 0;
          
}
