#include <stdio.h>
#include <stdlib.h>

// Functions to read (from the user) , pass it to the structure & print the content of the struct to the user
//Main function allocate memory for the intemName , pointers should be passed to the read and print functions

struct item
{
  char  *itemName;
  int quantity;
  float price;
  float amount;
};

int readItem (struct item *tag)
{
  
printf("Enter the name: ");
scanf("%s", tag->itemName);

printf("\nEnter the quantity: ");
scanf("%d", &tag->quantity);

printf("\nEnter the price: ");
scanf("%f", &tag->price);

tag->amount = tag->quantity * tag->price;
}

int printItem (struct item *tag)
{
  printf("Name %s\n", tag->itemName);
    printf("Quantity %d\n", tag->quantity);
      printf("price %.2f\n", tag->price);
        printf("Amount %.2f\n", tag->amount);

}

int main(int argc, char const *argv[])
{
  
  struct item itm;
  struct item *pItem;

  pItem = &itm;

  pItem->itemName = (char *)malloc(30 * sizeof(char));

  if(pItem == NULL)
  exit(-1);

  readItem(pItem);

  printItem(pItem);

  free(pItem->itemName);


  return 0;
}




