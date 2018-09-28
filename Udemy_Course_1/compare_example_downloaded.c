#include <stdio.h>
#include <stdbool.h>
int compare(char str1[],char str2[]);
int main(int argc, char const *argv[])
{
    char str1[100] = "same";
    char str2[100] = "same";
   
    

    printf("%d",compare(str1,str2));
  

    return 0;
}

int compare(char str1[],char str2[])
{
    int i,outcome = true;
    for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++) {
        if(str1[i] != str2[i]) {
            outcome = false;
            break;
        }
    }
    return outcome;
}