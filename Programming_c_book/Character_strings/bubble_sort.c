#include <stdio.h>
#include <string.h>

struct entry
{
    char word[15];
    char definition[64];
};


int main ( void ){
//    void dicionarySort ( struct entry * dictionary[], const int entries );

struct entry dictionary[100] =
    { { "aardvark", "a burrowing African mammal"        },
      { "ahoy",     "a nautical call of greeting"       },
      { "affix",    "to append; attach"                 },
      { "addle",    "to become confused"                },
      { "agar",     "a jelly made from seaweed"         },
      { "aerie",    "a high nest"                       },
      { "acumen",   "mentally sharp; keen"              },
      { "aigrette", "an ornamental cluster of feathers" },
      { "abyss",    "a bottomless pit"                  },
      { "ajar",     "partially opened"                  } };

int i, j, entries = 10;
struct entry temp[10];

printf("Dictionary before sorting:\n");
for ( i = 0; i < entries; ++i )
    printf("Word: \"%s\" \t Definition: \"%s\"\n", dictionary[i].word, dictionary[i].definition );


//dictionary[100] = dicionarySort ( &dictionary, 10 );

for ( i = 0; i < entries - 1; ++i )
    for ( j = i + 1; j < entries; ++j )
        if (strcmp(dictionary[i].word, dictionary[j].word) > 0){ // if previous word is higher than next word..
            temp[i] = dictionary[i];
            dictionary[i] = dictionary[j];
            dictionary[j] = temp[i];
        } // ..exchange their positions in the dictionary



printf("\nDictionary after sorting:\n");
for ( i = 0; i < entries; ++i )
    printf("Word: \"%s\" \t Definition: \"%s\"\n", dictionary[i].word, dictionary[i].definition );

printf("\n");

return 0;
}