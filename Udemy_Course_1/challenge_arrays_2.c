// two dimentional array float type
// program will find total rainfall for each year, everage yearly rainfall, average rainfall for each month
// array should have 4 rows and 12 columns
// rainfall can be as float numbers

/* Output should be like that:

    YEAR    RAINFALL
    2010    32.4
    2011    37.9
    2012    49.8
    2013    44.0
    2014    32.9

    The yearly average is 39.4 cm.

    MONTHLY AVERAGES

    JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC
    7.3 7.3 4.3 2.3 5.6 7.6 8.7 4.9 1.1 4.4 6.3 2.1

    */

   #include <stdio.h>
   #include <math.h>


   int main(int argc, char const *argv[])
   {
       
       float rainfall[4][12] = {
           {79.04358609, 98.90220548, 39.60139265, 57.52711215, 12.36763361, 52.74707959, 12.70311265, 92.09167233, 26.71502675, 68.61729238, 65.34091629, 54.0416938}, // initilized row nr 0
           {56.71751161, 41.84081968, 13.20749387, 68.84373418, 53.75083271, 1.415771268, 18.15293566, 76.34453636, 26.05450044, 7.090334212, 90.17780891, 45.18185002}, // initilized row nr 1
           {66.40061618, 72.83866501, 11.69591902, 53.04535246, 37.99345704, 14.32815442, 89.64438818, 54.77001851, 67.1928224, 44.31358399, 27.74119796, 93.19553756}, // initilized row nr 2
           {98.48005613, 58.59199171, 31.74641816, 37.12271766, 12.53006242, 90.60172859, 41.66593053, 22.61715632, 94.76057517, 6.700390666, 54.2996431, 87.51109774} // initilized row nr 3

       };
        int i, j;
        float sumYear = 0.0, sumMonth = 0.0, averageYear, averageMonth;


// calculate the sum and average on the row
 //sumYear

  
  
         for(j = 0; j < 12; j++)
  {
      sumYear = sumYear + rainfall[0][j]; // if I change 0 to i does not print :( do not know why
                          
    }
      for (i = 0; i < 4 && averageYear ; i++)
    {
                averageYear = sumYear / 12;
                printf("Sum Year %f = Average year  %f\n", sumYear, averageYear);
    }

      for(i = 0; i < 4; i++)
  {
      sumMonth = sumMonth + rainfall[i][0]; // if I change 0 to i does not print :( do not know why
                          
    }
      for (j =0; j < 12 ; j++)
    {
                averageMonth = sumMonth / 4;
                printf("Sum Month %f = Average Month  %f\n", sumMonth, averageMonth);
    }

  
 
      
   
  


          /*  for(i = 0; i < 4; i++) // displaying the rows = years
                {
                    for(j = 0; j < 12; j++) // displaying the columns = months
                    printf("[%d][%d] = %f\n",i,j, rainfall[i][j]); // printing the array
                    printf("\n"); // dividing the array
                }
       */
       return 0;
   }
   