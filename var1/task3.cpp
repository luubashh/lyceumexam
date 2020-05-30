/*Ввести с клавиатуры натуральное число n. Является ли это число элементом
последовательности Фибоначчи? Последовательность Фибоначчи: 1 1 2 3 5 8 13 21... 
каждое следующее число является суммой двух предыдущих.*/

#include <stdio.h>

int main()
{
    int num;
    printf("enter number\n");
    scanf("%d", &num);

    int x = 1;
    int y = 1;
    int z = 1;

    while (z <= num)
    {
        if (z == num)
        {
            printf("this number is a part of fibonachi numbers\n");
            break;
        }

        z = x + y;
        x = y;
        y = z;
    }

    if (y != num)
        printf("this number isn't a part of fibonachi numbers\n");

    return 0;
}
