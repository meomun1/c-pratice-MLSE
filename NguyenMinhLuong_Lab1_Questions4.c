#include <stdio.h>
#include<string.h>

int main() {
    int x; 
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int t;
    if( x > y )
    {
        t = 0;
    }
    else
    {
        t = 1;
    }

    if(t)
    {
        x = 5;
    }
    else
    {
        x = 10;
    }
    
    // if ( t = ( x > y ? 0 : 1))
    // {
    //     x = 5;
    // }
    // else
    // {
    //     x = 10;
    // }
    printf("%d", x);
    
}
