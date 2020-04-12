#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c)
{
    int S[3];
    S[0]=*a;
    S[1]=*b;
    S[2]=*c;

    for (int j=1; j<3; j++)
    {
        int *key;
        *key = S[j];
        int i=j-1;
        while (i>0 && S[i]<*key)
        {
            S[i+1]=S[i];
            i-=1;
            S[i+1]=*key;
        }
    }
    return;
}

int main()
{
    int x,y,z;
    x=10;
    y=20;
    z=30;
    sort(&x,&y,&z);
    printf("x=%d, y=%d, z=%d\n", x,y,z);
    return(0);
}