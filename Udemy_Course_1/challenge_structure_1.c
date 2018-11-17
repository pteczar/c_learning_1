//create initialize printf

#include <stdio.h>

struct employee
{
    char name[30];
    int hireDate;
    float salary;
};


int main(int argc, char const *argv[])

{

    struct employee emp1 = {"John Smith",12, 22.300};
    
    printf("Name = %s, Hired in month = %d, Salary = %f\n", emp1.name, emp1.hireDate, emp1.salary);


    printf("Enter additional data:\nName: ");

    struct employee emp2;

    scanf("%s", emp2.name );
    printf("\nMonth of hire: ");
      scanf("%d", &emp2.hireDate );
      printf("\nSalary: ");
        scanf("%f", &emp2.salary );
    

    printf("%s %d %f\n", emp2.name, emp2.hireDate, emp2.salary);
    printf("%s %d %f\n", emp1.name, emp1.hireDate, emp1.salary);
    return 0;
}
