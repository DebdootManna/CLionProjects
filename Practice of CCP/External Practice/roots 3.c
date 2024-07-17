#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, imaginary;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
            break;
        case 0:
            switch (discriminant < 0) {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("root1 = %.2lf+i%.2lf and root2 = %.2lf-i%.2lf", root1, imaginary, root2, imaginary);
                    break;
                case 0:
                    root1 = root2 = -b / (2 * a);
                    printf("root1 = root2 = %.2lf", root1);
                    break;
            }
            break;
    }

    return 0;
}
