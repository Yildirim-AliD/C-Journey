/* Using the sizeof operator, write a program that displays the number of bytes required for the following types:
   - char
   - short
   - int
   - long
   - float
   - double
   - long double
   - an array of int[20]
   - and a pointer to an int (int*) */

#include <stdio.h>

int main()
{
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int array[20], *ptr = array;

    printf("sizeof c = %d\t\tsizeof(char) = %d"
           "\nsizeof s = %d\t\tsizeof(short) = %d"
           "\nsizeof i = %d\t\tsizeof(int) = %d"
           "\nsizeof l = %d\t\tsizeof(long) = %d"
           "\nsizeof f = %d\t\tsizeof(float) = %d"
           "\nsizeof d = %d\t\tsizeof(double) = %d"
           "\nsizeof ld = %d\t\tsizeof(long double) = %d"
           "\nsizeof array = %d"
           "\nsizeof ptr = %d\n",
           (int)sizeof c, (int)sizeof(char),
           (int)sizeof s, (int)sizeof(short),
           (int)sizeof i, (int)sizeof(int),
           (int)sizeof l, (int)sizeof(long),
           (int)sizeof f, (int)sizeof(float),
           (int)sizeof d, (int)sizeof(double),
           (int)sizeof ld, (int)sizeof(long double),
           (int)sizeof array, (int)sizeof ptr);

    return 0;
}
