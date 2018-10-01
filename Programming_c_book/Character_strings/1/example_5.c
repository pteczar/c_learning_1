// Program to illustrate the %s scanf format characters

#include <stdio.h>
int main(int argc, char const *argv[])
{

char s1[81], s2[81], s3[81];

printf("Enter text: ");

scanf("%s%s%s", s1, s2, s3);
printf("ns1 = %s\ns2 = %s\ns3 = %s", s1, s2, s3);
        
        return 0;
}
            