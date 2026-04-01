#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main() {
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = addComplex(num1, num2);

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
