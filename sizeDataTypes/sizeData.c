#include <stdio.h>

int main() {
    // %u  : unsigned integer value
    // %zu : unsigned integer value to print the value of a size_t, such as the result of the sizeof operator.
    printf("size of char = %zu byte(s)\n"
           "size of unsigned char = %zu byte(s)\n\n"
           "size of short = %zu byte(s)\n"
           "size of unsigned short = %zu byte(s)\n\n"
           "size of int = %zu byte(s)\n"
           "size of unsigned int = %zu byte(s)\n\n"
           "size of long = %zu byte(s)\n"
           "size of unsigned long = %zu byte(s)\n\n"
           "size of long long = %zu byte(s)\n"
           "size of unsigned long long = %zu byte(s)\n\n"
           "size of float = %zu byte(s)\n"
           "size of double = %zu byte(s)\n",
           sizeof(char),
           sizeof(unsigned char),
           sizeof(short),
           sizeof(unsigned short),
           sizeof(int),
           sizeof(unsigned int),
           sizeof(long),
           sizeof(unsigned long),
           sizeof(long long),
           sizeof(unsigned long long),
           sizeof(float),
           sizeof(double));
    return 0;
}
