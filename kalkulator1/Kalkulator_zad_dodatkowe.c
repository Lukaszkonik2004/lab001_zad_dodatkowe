#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2;
    double PI = 3.14;
    printf("Wprowadz dzialanie (+, -, *, /, sqrt, ^, a, b, i, c, t, g): ");
    scanf_s("%c", &operator);

    switch (operator) {
    case '+':
        printf("Wprowadz dwie liczby: ");
        scanf_s("%lf %lf", &num1, &num2);
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Wprowadz dwie liczby: ");
        scanf_s("%lf %lf", &num1, &num2);
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("Wprowadz dwie liczby: ");
        scanf_s("%lf %lf", &num1, &num2);
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("Wprowadz dwie liczby: ");
        scanf_s("%lf %lf", &num1, &num2);
        if (num2 != 0)
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        break;
    case 's':
        printf("Wprowadz liczbe pierwiastka: ");
        scanf_s("%lf", &num1);
        if (num1 >= 0)
            printf("Pierwiastek kwadratowy z %.2lf to %.2lf\n", num1, sqrt(num1));
        break;
    case '^':
        printf("Wprowadz podstawe i wyk³adnik: ");
        scanf_s("%lf %lf", &num1, &num2);
        printf("%.2lf do potegi %.2lf to %.2lf\n", num1, num2, pow(num1, num2));
        break;
        ;
    case 'a':
        printf("Wprowadz liczbe do wyznaczenia wartoœci bezwzglednej (z uzyciem funkcji abs): ");
        scanf_s("%lf", &num1);
        printf("Wartosc bezwzgledna z %.2lf to %.2lf\n", num1, fabs(num1));
        break;
    case 'b':
        printf_s("Wprowadz liczbe do wyznaczenia wartosci bezwzglednej (bez uzycia funkcji abs): ");
        scanf_s("%lf", &num1);
        if (num1 < 0)
            num1 = -num1;
        printf("Wartosc bezwzgledna z %.2lf to %.2lf\n", num1, num1);
        break;
        ;
    case 'i':
        printf("Wprowadz kat w stopniach: ");
        scanf_s("%lf", &num1);
        num1 = num1 * (PI / 180.0);
        printf("sin(%.2lf) = %.2lf\n", num1, sin(num1));
        break;
    case 'c': 
        printf("Wprowadz kat w stopniach: ");
        scanf_s("%lf", &num1);
        num1 = num1 * (PI / 180.0);
        printf("cos(%.2lf) = %.2lf\n", num1, cos(num1));
        break;
    case 't': 
        printf("Wprowadz kat w stopniach: ");
        scanf_s("%lf", &num1);
        num1 = num1 * (PI / 180.0);
        printf("tg(%.2lf) = %.2lf\n", num1, tan(num1));
        break;
    case 'g': 
        printf("Wprowadz kat w stopniach: ");
        scanf_s("%lf", &num1);
        num1 = num1 * (PI / 180.0);
        if (tan(num1) != 0)
            printf("ctg(%.2lf) = %.2lf\n", num1, 1 / tan(num1));
        break;
    default:
        printf("Nieprawidlowy operator.\n");
    }
    return 0;
}