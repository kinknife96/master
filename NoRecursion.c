#include<stdio.h>
#include<conio.h>
#include"NoRecursion.h"

void swap(int x,int y)
{
    int temp;
    x = temp;
    x = y;
    y = temp;
}
long no_tong_1 ( int n )
{
    int x,y,z,i;
    long w = 0,tong = 6; 
    x=1;
    y=2;
    z=3;
    for (i=3;i <= n;i++)
    {
        w = x + y + z;
        tong += w;
        if ( (x < y) & (x < z))
        x = w;
        else if ( (y < x) & (y < z))
        y = w;
        else z = w;
    }
    return tong;
}

long no_tong_2 ( int m )
{
    int x,y,z,i;
    long w = 0,tong = 6;
    x=1;
    y=2;
    z=3;
    for (i=3;i <= m;i++)
    {
        if ( i < 5 )
        {
            w = x + y + z + 1 ;
            if ( (x < y) & (x < z))
            x = w;
            else if ( (y < x) & (y < z))
            y = w;
            else z = w;
        }
        else
        {
            w = x + y + z ;
            if ( (x < y) & (x < z))
            x = w;
            else if ( (y < x) & (y < z))
            y = w;
            else z = w;
        }
        tong += w;
    }
    return tong;
}

long no_tong_3 ( int a )
{
    int x,y,z,k,i;
    long w = 0,tong = 10;
    x = 1;
    y = 2;
    z = 3;
    k = 4;
    for (i=4;i <= a;i++)
    {
        w = x + y - z + k;
        tong += w;
        swap(x,y);
        swap(y,z);
        swap(z,k);
        k = w;
    }
    return tong;
}
long no_tong_4 ( int b )
{
    int x = 1,y = 2,z = 3,k = 4,i;
    long w = 0,tong = 10;
    for (i=4;i <= b;i++)
    {
        w = x - y + z +k;
        tong += w;
        swap(x,y);
        swap(y,z);
        swap(z,k);
        k = w;
    }
    return tong;
}