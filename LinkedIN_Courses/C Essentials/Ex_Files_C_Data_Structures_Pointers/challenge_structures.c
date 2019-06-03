#include <stdio.h>



struct date
{
int month;
int day;
int year;
};

struct person
{
 char name[32];
 struct date tookoffice;}
president[4] =
{{ "George Washington",
{ 4, 30, 1789}},
{ "Thomas Jefferson",
{ 3, 4, 1801}},
{ "Abraham Lincoln",
{ 3, 4, 1861}},
{ "Theodore Roosevelt",
{ 9, 14, 1901}}
};


int main()
{

 int i;

 for ( i = 0; i< 4; i++)

 {
  printf("%s %d %d %d\n", president[i].name,president[i].tookoffice.month,president[i].tookoffice.day, president[i].tookoffice.year);
 }

//swap

struct person temp;

puts("swapping....");

temp = president[1];
president[1] = president[2];
president[2] = temp;


 for ( i = 0; i< 4; i++)

 {
  printf("after swap: %s %d %d %d\n", president[i].name,president[i].tookoffice.month,president[i].tookoffice.day, president[i].tookoffice.year);
 }




  return(0);
}
