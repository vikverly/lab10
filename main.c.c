/*Студент: Черных Виктория Александровна
Группа: ПИ-1-1
Назначение: Функции в языке С, передача аргументов, возврат результатов.
*/

#include <stdio.h>

// Функция поиска минимума из двух чисел
int min2(int a, int b) {
    if (a < b) return a;
    return b; 
}

// Функция поиска максимума из двух чисел
int max2(int a, int b) {
    if (a > b) return a;
    return b;
} 

// Функция вычисления разности между максимумом и минимумом трех чисел
int range3(int x, int y, int z) {
    int maximum = max2(max2(x, y), z);
    int minimum = min2(min2(x, y), z);
    return maximum - minimum;
}

int main(void) {
    int x, y, z;
    
    // Чтение трех целых чисел с проверкой успешности ввода
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        puts("Input error");
        return 1;
    } 

    // Проверка диапазона от -1000 до 1000
    if (x < -1000 || x > 1000 || y < -1000 || y > 1000 || z < -1000 || z > 1000) {
        puts("Range error");
        return 1;           
    }

    // Вычисление результата через range3 и вывод
    int result = range3(x, y, z);
    printf("Range = %d\n", result); 

    return 0;
}