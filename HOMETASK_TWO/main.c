#include <stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    double L1, L2, V1, V2;


    printf("Введите длину первого поезда (L1): ");
    scanf_s("%lf", &L1);

    printf("Введите скорость первого поезда (V1): ");
    scanf_s("%lf", &V1);

    printf("Введите длину второго поезда (L2): ");
    scanf_s("%lf", &L2);

    printf("Введите скорость второго поезда (V2): ");
    scanf_s("%lf", &V2);


    if (V1 <= 0 || V2 <= 0) {
        printf("Ошибка: скорости должны быть положительными.\n");
        return 1;
    }

    // Вычисляем относительную скорость
    double relative_speed = V1 + V2;

    // Вычисляем общее расстояние, которое нужно пройти поездам друг относительно друга
    double total_distance = L1 + L2;

    // Вычисляем время встречи
    double time = total_distance / relative_speed;


    printf("Время прохождения поездов друг против друга: %.2lf секунд\n", time);

    return 0;
}