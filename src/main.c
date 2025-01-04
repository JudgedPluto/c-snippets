#include "../include/snippets.h"

int main() {
    int numbers[] = {23, 4, 67, 12, 89, 3, 45};
    int size = sizeof(numbers) / sizeof(int);
    min_max(numbers, size);

    word_count("file.txt");

    fib_sequence(50);

    is_palindrome(23432);
    is_palindrome(8758734);
    return 0;
}
