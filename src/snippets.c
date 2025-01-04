#include <stdio.h>
#include <ctype.h>
#include "../include/snippets.h"

void min_max(int *arr, int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    int min, max;
    min = max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);
}

void word_count(char *file_name) {
    FILE *file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Error reading file.\n");
        return;
    }

    char ch;
    int count, is_word;
    count = is_word = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch) || ispunct(ch)) is_word = 0;
        else if (!is_word) {
            is_word = 1;
            count++;
        }
    }

    fclose(file);

    printf("Word count: %d\n", count);
}

void fib_sequence(int number) {
    int first = 0, second = 1, next;
    printf("Fibonacci sequence upto %d:\n", number);
    
    printf("%d %d ", first, second);
    next = first + second;
    while(next <= number) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");
}

void is_palindrome(int number) {
    int number_copy = number, reversed = 0;

    while (number_copy != 0) {
        int digit = number_copy % 10;
        reversed = reversed * 10 + digit;
        number_copy = number_copy / 10;
    }

    printf("'%d' Reversed is: %d\n", number, reversed);
    if (reversed == number) printf("'%d' is a palindrome.\n", number);
    else printf("'%d' is not a palindrome.\n", number);
}
