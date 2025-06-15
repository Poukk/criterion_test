#include <stdio.h>
#include "fibonacci.h"

int main() {
    printf("Fibonacci Sequence Demonstration:\n");
    printf("=================================\n");
    
    printf("fibonacci(0) = %d\n", fibonacci(0));
    printf("fibonacci(1) = %d\n", fibonacci(1));
    printf("fibonacci(5) = %d\n", fibonacci(5));
    printf("fibonacci(10) = %d\n", fibonacci(10));
    
    return 0;
}