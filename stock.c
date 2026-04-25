#include <stdio.h>
void main()
{
    int size ;
    printf ("enter the number of elements to store :\n");
    scanf ("%d",&size);
    int a [size];
    for (int i=0;i<=size-1;i++)
    {
        printf ("enter the %d value \n",i+1);
        scanf ("%d",&a[i]);
    }
    int b=0;
    int s=0;
    int p=0;
    for (int i=0;i=size-1;i++)
    {
        for (int j=i+1l;j<=size-1;j++)
        {
            if (a[j]-a[i]>p)
            {
                b=a[j];
                s=a[j];
                p=a[j]-a[i];
            }
        }
    }
    printf("buy=%d\t sell=%d\t profit=%d,b,s,p");
}