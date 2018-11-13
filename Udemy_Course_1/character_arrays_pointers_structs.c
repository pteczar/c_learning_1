#include <stdio.h>

void getinfo(struct namect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name. \n")
    s_gets(temp, SLEN);

 //allocate memory to hold name

 pst->fname = (char *)malloc(strlen(temp)+1);

 //copy name to allocated memory
 strcpy(pst->fname, temp);
 printf("Please enter your last name.\n");
 s_gets(temp,SLEN);
 pst->lname = (char *) malloc(strlen(temp)+1);
 strcpy(pst->lname, temp);  

}

int main(int argc, char const *argv[])
{
    


    return 0;
}
