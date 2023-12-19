#include <stdio.h>

int main() {
    int integerVar = 10;
    int integerVar_2 = 3;
    double doubleVarExplicit;
    double doubleVarImplicit;

    // Explicitly cast an int to a double
    doubleVarExplicit = (double)integerVar;

    // Implicit conversion from int to double
    doubleVarImplicit = integerVar; // No casting operator needed


    printf("Integer variable: %d\n", integerVar);
    printf("Double variable after explicit casting: %.2f\n", doubleVarExplicit);
    printf("Double variable after implicit conversion: %.2f\n\n", doubleVarImplicit);

    // printf("%.2f\n", integerVar/integerVar_2); // Get 0.00 since they are all integers
    printf("%.2f\n", (float)integerVar/integerVar_2); // Make one of them to float
    printf("%.2f\n", integerVar/(float)integerVar_2); //  Make one of them to float

    return 0;
}

