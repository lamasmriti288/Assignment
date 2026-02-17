#include <stdio.h>
int main() {
    float a, b, c, d;
    float root, r1, r2;
    int i;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        root = d;
        for (i = 0; i < 10; i++)
            root = (root + d / root) / 2;

        r1 = (-b + root) / (2 * a);
        r2 = (-b - root) / (2 * a);

        printf("Roots are %f and %f", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are equal: %f", r1);
    }
    else {
        printf("Roots are imaginary");
    }

    return 0;
}