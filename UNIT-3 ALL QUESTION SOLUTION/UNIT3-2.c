#include <stdio.h>

void areaOfCircle(float *radius, float *area) {
*area = 3.14 * (*radius) * (*radius);
}

int main() {
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    areaOfCircle(&r, &area);

    printf("Area of circle = %.2f\n", area);

    return 0;
}
