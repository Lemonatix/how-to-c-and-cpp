#include <math.h>
#include <stdio.h>
int primenumber(int p);
int main(void)
{   
    int i;
    int j;
    int h=1;
    int k=0;
    printf(\n);
    printf(\n Geben Sie eine gerade natuerliche Zahl ein: '');
    scanf(%d , &h);

    for (i=2; i<= h/2; i++)
    {
        k = h/2 -i;
        j = h-i;
            if (primenumber(i))
                if (primenumber (j) )
    printf(\n %5d %5d %5d, i,j,k);
}
return 0;
}

int primenumber(int p)
{
    int t =2;
    while (t <= (int) sqrt((float)p))
{
        if(p\%t == 0)
        return 0;
        else
        t++;
}
return 1; 
}