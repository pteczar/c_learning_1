//enum challenge

/* 
Author: Przemek
Purpose: Challenge
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT}; //defining the values of company enum , starting from 0,1,2,3 etc

    enum company chosen_company_1; // creating a new viariable to the enum 
     chosen_company_1 = GOOGLE; // assigning the value/name to the variable
    
    enum company chosen_company_2;
     chosen_company_2 = XEROX;

    enum company chosen_company_3;
     chosen_company_3 = EBAY;

     printf(" %d\n %d\n %d\n\n\n" ,chosen_company_2, chosen_company_1, chosen_company_3);

    return 0;
}
