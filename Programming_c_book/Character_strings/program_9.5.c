#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    char s1[81], s2[81], s3[81];
    printf("Enter text:\n");

    scanf("%80s%80s%80s", s1, s2, s3); //will read max 80 characters

    printf("\ns1 = %s\ns2 = %s\ns3 = %s",s1,s2,s3);

    return 0;
}

