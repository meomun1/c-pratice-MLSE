#include <stdio.h>
#define SIZE 100

int main() {
    int number;
    printf("Enter an integer: ");  
    scanf("%d", &number);
    printf("The answer is:");
    for( int i = 0 ; i < number ; i++)
    {
        int j, check = 0;
        if(i == 0 || i == 1){
            check = 1;
        }
  
        for ( j = 2 ; j <= i/2 ; j++)
        {
            if( i%j == 0)
            {
            check = 1;
            break;
            }
        }
    
        if(check == 0)
        {
            printf("%d ", i) ; 
        }
    }
    return 0;
}
