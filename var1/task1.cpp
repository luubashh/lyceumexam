/*Вводить с клавиатуры целые числа. Условие окончания ввода  число 0. Найти среди
этих чисел наименьшее (0 не считать наименьшим).*/

#include <stdio.h>

int main()
{
    int minx = __INT_MAX__;

    printf("enter some numbers, if you want to stop - enter 0\n");

    while (true)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
            break;
        if (num < minx)
            minx = num;
    }
    
    if (minx == __INT_MAX__)
        printf("error");
    else
        printf("minx = %d\n", minx);

    return 0;
}
