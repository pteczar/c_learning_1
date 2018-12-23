/*Write a program that acts as a simple “printing” calculator.
 The program should allow the user to type in expressions of the form number operator
  The following operators should be recognized by the program:
   +     -     *     /     S     E The S operator tells the program 
   to set the “accumulator” to the typed-in number. 
   The E operator tells the program that execution is to end. */ 

   #include <stdio.h>

int main(void)
{
    float value, output;
    char op;

    printf("Please enter a value and operator to begin\n");
    scanf("%f %c", &value, &op);

    while (op != 'e' || op != 'E') // while operator is different than E or e
    {
        switch(op) // switch statement that includes s and S as the start point
        {
            case 'S':
            case 's':
                output = value; // output is the same as value
                break;

            case '+': // depending on the case the operant is used on actual value and
                output += value; // is added moving lower 
                break;

            case'-':
                output -= value;
                break;

            case '*':
                output *= value;
                break;

            case '/':
                if (value == 0)
                {
                    printf("Division by zero\n");
                }
                else
                {
                    output /= value;
                }
                break;

            case 'E':
            case 'e':
                output += value;
                printf("= %.3f\n", output);
                return 0;

            default:
                printf("Unidentified operator\n");
                return 0;
        }
        printf("= %.3f\n", output);
        scanf("%f %c", &value, &op);
    }

    return 0;
}