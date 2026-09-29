#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, C;

    printf("Введите вес трёх игрушек A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    puts((A % 7 == 0 && B % 7 == 0 && C % 7 == 0) ? "Партия принята" : "Партия не принята");

    system("pause");
    return 0;
}