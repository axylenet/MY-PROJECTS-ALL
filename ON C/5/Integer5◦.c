/*

Integer5◦
. Даны целые положительные числа A и B (A > B). На отрезке длины A
размещено максимально возможное количество отрезков длины B (без
наложений). Используя операцию взятия остатка от деления нацело, найти
длину незанятой части отрезка A.


*/
#include <stdio.h>

int main()
{
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    printf("Незанятая часть отрезка:%d\n", a % b);
    
    
    return 0;
}
