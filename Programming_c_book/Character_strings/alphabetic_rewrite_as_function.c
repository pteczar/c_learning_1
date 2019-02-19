#include <stdio.h>
#include <string.h>

#define ENTRIES 11

int dicionarySort ( struct entry dictionary[], const int entries );

struct entry
{
    char word[15];
    char definition[100];
};

 const struct entry dictionary[100] = 
    {
    
    { "aardvark", "a burrowing African mammal"        },
    { "ahoy",     "a nautical call of greeting"       },
    { "affix",    "to append; attach"                 },
    { "addle",    "to become confused"                },
    { "agar",     "a jelly made from seaweed"         },
    { "aerie",    "a high nest"                       },
    { "acumen",   "mentally sharp; keen"              },
    { "aigrette", "an ornamental cluster of feathers" },
    { "abyss",    "a bottomless pit"                  },
    { "ajar",     "partially opened"                  },
    { "kutas",    "penis in Polish"                   }
 
    };

int main(int argc, char const *argv[])
{
    int i;
    int entries = 11; // why this needs to be declare if I have it in #define?

          printf("Dictionary before sorting:\n");

    for ( i = 0; i < entries; ++i )
        printf("Word: \"%s\" \t Definition: \"%s\"\n", dictionary[i].word, dictionary[i].definition );

        printf("\nDictionary after sorting:\n");
       
         dicionarySort(dictionary[i].word, entries); // why there is a problem with entries?
         dicionarySort(dictionary[i].definition, entries);// why there is a problem with entries?

    for ( i = 0; i < entries; ++i )
   

        printf("Word: \"%s\" \t Definition: \"%s\"\n", dictionary[i].word, dictionary[i].definition );

        printf("\n");



    return 0;
}

int dicionarySort ( struct entry dictionary[], const int entries )
{
 int i,j;

 struct entry temp;

 for ( i = 0; i < entries - 1; ++i )
        for ( j = i + 1; j < entries; ++j )
            if ( strcmp(dictionary[i].word, dictionary[j].word) > 0 )
            { 
                temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            } 
 


}

//https://hackr.io/blog/bubble-sort-in-c
