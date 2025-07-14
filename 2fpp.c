#include <stdio.h>
#include <math.h>

// Example function: f(x) = x^3 - x - 2
double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a, b, c, fa, fb, fc, prev_c = 0.0, EPSILON, error;
    int iter = 1;

    // Input interval [a, b]
    printf("Enter the values of a and b (initial guesses): ");
    scanf("%lf %lf", &a, &b);

    // Input epsilon
    printf("Enter the value of epsilon (tolerance): ");
    scanf("%lf", &EPSILON);

    fa = f(a);
    fb = f(b);

    if (fa * fb >= 0) {
        printf("The function has the same sign at a and b.\n");
        return 1;
    }

    printf("Iter\t a\t\t b\t\t c\t\t f(c)\t\t Error\n");

    do {
        prev_c = c;
        c = (a * fb - b * fa) / (fb - fa);
        fc = f(c);

        // Calculate error
        if (iter == 1) {
            error = 0.0;
        } else {
            error = fabs(c - prev_c) / c;
        }

        printf("%d\t %.6lf\t %.6lf\t %.6lf\t %.6lf\t %.6lf\n", iter, a, b, c, fc, error);

        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }
        iter++;
    } while (fabs(fc) > EPSILON && (iter == 1 || fabs(c - prev_c) > EPSILON));

    printf("Root is approximately: %.6lf\n", c);

    return 0;
}