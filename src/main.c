#include <stdio.h>
#include "../include/snippets.h"

int main() {
    printf("Q1. Find Largest and Smallest\n");
    printf("-----------------------------\n");
    int numbers[] = {23, 4, 67, 12, 89, 3, 45};
    int size = sizeof(numbers) / sizeof(int);
    min_max(numbers, size);

    printf("\n");
    printf("Q2. File Handling\n");
    printf("-----------------\n");
    word_count("file.txt");

    printf("\n");
    printf("Q3. Fibonacci Sequence\n");
    printf("----------------------\n");
    fib_sequence(50);

    printf("\n");
    printf("Q4. Reverse a Number\n");
    printf("--------------------\n");
    is_palindrome(23432);
    is_palindrome(8758734);
    return 0;
}
