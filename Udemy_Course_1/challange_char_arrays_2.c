/*
1. write a program that displays string in reverese order / it should read input from keyboard / need to use the strlen function
once you hyave  the size of the string than you can reverse the characters

2. write a program that sorts the strings of an array by using a bubble sort / need to use the strcpy and strcmp functions

bubble sort - algorithm

input example:L
zero
one 
two

output after sorting:
one
two
zero
*/

#include <stdio.h>
#include <string.h>
#define MAX 100 

void displaySort(char arr[][MAX], int n);

int main(int argc, char const *argv[])

{ 
    char arr[][MAX] = {"I","Do","Not","Get","It"}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    void reverse(char s[1000]);
    char s[1000] = "mars";

    reverse(s);
  
    printf("Strings in unsorted order are : "); 
    for (int i= 0; i < n; i++) 
        printf("\n String %d is %s", i + 1, arr[i]); 
        printf("\n\n");

    displaySort(arr, n); 
  
    printf("Strings in sorted order are : "); 
    for (int i = 0; i < n; i++) 
        printf("\n String %d is %s", i + 1, arr[i]); 
    return 0; 
} 


void displaySort(char arr[][MAX], int n) 
{ 
    char temp[MAX]; 
  
    // Sorting strings using bubble sort 
    for (int j = 0; j < n-1; j++) 
    { 
        for (int i = j+1; i < n; i++) 
        { 
            if (strcmp(arr[j], arr[i]) > 0) 
            { 
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[i]); 
                strcpy(arr[i], temp); 
            } 
        } 
    } 
}

void reverse(char s[1000])
{
  int i = 0;
  int j = strlen(s) - 1;
  char temp;
 
   while ( i < j)
   {
       temp = s[i];
       s[i] = s[j];
       s[j] = temp;
       i++;
       j--;
   }
   printf("\nReverse string is : %s\n\n", s);
   
}