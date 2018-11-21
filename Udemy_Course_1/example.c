#include <stdio.h>

main()
{
   FILE *plik;
   char* c1;
   int a=0;
   
   plik=fopen("test_file.txt","rt");
   
   while(c1 != EOF)
   {
      if ((c1=fgetc(plik)) == '\n') a++;
   }      
   printf("ilosc linii: %d\n",++a); //++a poniewaz nie jest liczona ostatnia linia oznaczona EOF, a nie \n   
   fclose(plik);
   return 0;
}