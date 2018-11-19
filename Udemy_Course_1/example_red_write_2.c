#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
   // int c;
    char str[61];
   
    fp = fopen("/home/przemek/Documents/C_learning/GIT/c_learning_1/file.txt","r");

    if(fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
        if(fgets(str, 60, fp) != NULL)
        {
            printf("%s", str);
        }
  
        fclose(fp);
        fp = NULL;

  
    return (0);
  }
