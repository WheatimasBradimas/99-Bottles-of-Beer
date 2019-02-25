/* 99 Bottles of Beer on the Wall */
/* Problem given to me on Discord for a user named @zekka */
/* February 25, 2019 */

#include <stdio.h>

int main()

{
    
    int bottles=99; 
    
        while(bottles>0)
        {
               printf("%d bottles of beer on the wall, ", bottles);
               printf("%d bottles of beer.\n", bottles); 
               printf("Take one down and pass it around, ");     
               bottles=bottles-1;
               printf("%d bottles of beer on the wall\n", bottles); 
        }
               printf("No more bottles of beer on the wall, no more bottles of beer.\n");
               printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");
        
    
fflush(stdin); 
getchar(); 
return 0; 

}
