#include<stdio.h>

int  main () {
    // Decrement Opreator
    // i-- (post decrement opreator)
    // ++i (pre decrement opreator)

    int i=1;
    printf("%d\n" , i--); // i++ (use the value of i first and then decrease)
    printf("%d\n" , i);

     printf("%d\n" , --i); // ++i (decrease the value of i first and then use)
     printf("%d\n" , i);

    return 0;
    
}
