#include <stdio.h>

maximum(int x, int y)
{
    int z;
    z = (x>=y) ? x : y;
    printf("Maximum value = =%d", z);
    return;
}

int main()
{
    int x,y,z;
    printf("enter two numbers:\n");
    scanf("%d%d", &x,&y);
    z= maximum(x,y);
    return;
}
