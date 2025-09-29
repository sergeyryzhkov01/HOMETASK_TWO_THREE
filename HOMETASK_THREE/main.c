#include <stdio.h> 
#include <math.h> 


double calculateHypotenuse(double side1, double side2) {
    
    return sqrt(side1 * side1 + side2 * side2);
}

int main() {
    double side1, side2, hypotenuse;

   
    printf("Введите длину первой стороны: ");
    scanf("%lf", &side1); 

    printf("Введите длину второй стороны: ");
    scanf("%lf", &side2); 

   
    hypotenuse = calculateHypotenuse(side1, side2);

    
    printf("Гипотенуза: %.2lf\n", hypotenuse); // Выводим гипотенузу с двумя знаками после запятой

    return 0; 
}