
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, x1, x2;

    printf("Enter the coefficient of a: ");
    scanf("%f", &a);

    printf("Enter the coefficient of b: ");
    scanf("%f", &b);

    printf("Enter the coefficient of c: ");
    scanf("%f", &c);

    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    } else if (discriminant == 0) {
        
        x1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("x1 = x2 = %f\n", x1);
    } else {
        
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex:\n");
        printf("x1 = %f + %fi\n", realPart, imaginaryPart);
        printf("x2 = %f - %fi\n", realPart, imaginaryPart);
    }

    return 0;
}
