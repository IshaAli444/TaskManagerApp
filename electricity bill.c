/* This program is prepared by Isha Ali on 21/10/2023. This program calculates electricity bill with and without surcharge, according to units consumed. */

//starting the program
#include <stdio.h>
int main ()
{
    //defining variables
    int unit;
    float surcharge, rate, bill, tbill;

    //getting input of units consumed
    printf ("Enter the amount of units consumed:\n ");
    scanf ("%d", &unit);

    //deciding conditions for calculation of bill
        if (unit <=300)
            {
                rate=3.0;
                surcharge=0;
            }
        else
            {
                rate=3.5;
                surcharge=0.05;
            }

    //calculating the bill and total bill
        bill=rate*unit;
        tbill=bill+bill*surcharge;

    //printing the bill calculated on the screen
    printf ("Your bill is %2f\n", tbill);

    return 0;
}
//ending the program
