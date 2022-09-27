#include <stdio.h>
#include<string.h>

int main() {
    int digitNumber;
    
    scanf("%d", &digitNumber);
    
    while(digitNumber > 0 )
    {
        int outputNumber;
        
        outputNumber = digitNumber%10;
        
        
        printf("%d ", outputNumber);
        digitNumber = digitNumber/10;
    }
}
