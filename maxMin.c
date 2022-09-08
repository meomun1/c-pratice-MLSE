// Online C compiler to run C program online
#include <stdio.h>

int max(int a, int b, int c){
    int max;
    max = a;
    if( b > max ){
        max = b;
    }
    if( c > max ){
        max = c;
    }
    return max;
}

int min(int a, int b, int c){
    int min;
    min = a;
    if( b < min ){
        min = b;
    }
    if( c < min ){
        min = c;
    }
    return min;
}

float avg(int a, int b, int c){
    return (a+b+c)/3;
}

int main() {
    // Write C code here
    int firstNumber, secondNumber, thirdNumber, maximum, minium, average;
    
    printf("Please enter first Number \n");
    scanf("%d",&firstNumber);
    
    printf("Please enter second Number \n");
    scanf("%d",&secondNumber);
    
    printf("Please enter third Number \n");
    scanf("%d",&thirdNumber);
    
    maximum = max( firstNumber, secondNumber, thirdNumber);
    minium = min( firstNumber, secondNumber, thirdNumber);
    average = avg( firstNumber, secondNumber, thirdNumber);
    
    printf("The maximum is %d\n", maximum);
    printf("The minium is %d\n", minium);
    printf("The average is %d\n", average);
    return 0;
}