#include <stdio.h> // not working 

int main(void)
{
    float num1,num2,res;
    char op;

    printf ("Type in your expression.\n");
    scanf ("%f %c %f", &num1, &op, &num2);

    if(op == 'S'){
        printf(" = %.2f\n",num1);
        res = num1;
        while(1){
            printf ("Type in your expression.\n");
            scanf ("%c %f", &op, &num2);
            if(op == '+'){
                res += num2;
                printf("%.2f\n", res);
            }
            else if(op == '-'){
                res -=num2;
                printf("%.2f\n",res);
            }
            else if(op == '*'){
                res *=num2;
                printf("%.2f\n",res);
            }
            else if(op == '/'){
                if(num2 == 0)
                    printf("Division by zero\n");
                else
                    res /=num2;
                    printf("%.2f\n",res);

            }
            else if(op == 'E'){
                printf("End of the calculation:");
                printf("%.2f",res);
                break;

            }
        }     
        
    } 
}