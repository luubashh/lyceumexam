/*Ввести с клавиатуры натуральное число n. Найти в нем наибольшую цифру.*/

#include <stdio.h>

int main()
{
    printf("enter number\n");

    int num;

    scanf("%d", &num);

    int maxx = 0;

    while (true)
    {
        if (num % 10 == 0)
            break;
        else if (num % 10 > maxx)
        {
            maxx = num % 10;
        }
        
        num = num / 10;
    }

    printf("%d\n", maxx);
    return 0;
}
