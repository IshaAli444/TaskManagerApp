#include <stdio.h>

int main ()
{
    int s,i,c;
    printf ("values before swapping:\n");
    printf ("%d, %d",s,i);
    c=s;
    s=i;
    i=c;
    printf ("values after swapping:\n");
    printf ("%d, %d",s,i);
    return 0;


}
