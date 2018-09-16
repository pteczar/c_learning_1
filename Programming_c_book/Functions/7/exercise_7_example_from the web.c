#include <stdio.h>
 
int Power(int base, int pow){
//Special Cases:
    if (pow == 0) {return 1;}
    if (pow < 0)   {return 0;}  //No negative power is an integer
 
    int result=1;
         for(int i=0;i<pow;i++){
               result *= base;
         }
    return result;
}
             
int main(){
    printf("%d\n",Power(5,3));
    getchar();
    return 0;
}