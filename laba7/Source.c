#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    Task();
    Task2();
    TaskDZ();
}
int Task() {
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;
    default:
        printf("Это буква\n");
        break;
    }

    return 0;
}
int Task2() {
    float x, y, result;
    char op;

    printf("Введите выражение (например, 2.5+3.7): ");
    scanf("%f%c%f", &x, &op, &y);

    switch (op) {
    case '+':
        printf("= %.2f\n", x + y);
        break;
    case '-':
        printf("= %.2f\n", x - y);
        break;
    case '*':
        printf("= %.2f\n", x * y);
        break;
    case '/':
        if (y != 0) {
            printf("= %.2f\n", x / y);
        }
        else {
            printf("Ошибка: деление на ноль!\n");
        }
        break;
    case '^':
        printf("= %.2f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция: %c\n", op);
        break;
    }

    return 0;
}
int TaskDZ() {
    int n;

    printf("Введите степень десяти (например, -9 или 6): ");
    scanf("%d", &n);

    printf("10^%d - ", n);
    switch (n) {
    case -12:
        printf("пико\n");
        break;
    case -9:
        printf("нано\n");
        break;
    case -6:
        printf("микро\n");
        break;
    case -3:
        printf("милли\n");
        break;
    case -2:
        printf("санти\n");
        break;
    case -1:
        printf("деци\n");
        break;
    case 0:
        printf("без приставки\n");
        break;
    case 1:
        printf("дека\n");
        break;
    case 2:
        printf("гекто\n");
        break;
    case 3:
        printf("кило\n");
        break;
    case 6:
        printf("мега\n");
        break;
    case 9:
        printf("гига\n");
        break;
    case 12:
        printf("тера\n");
        break;
    default:
        printf("приставки для такой степени нет\n");
        break;
    }

    return 0;
}