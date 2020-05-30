/*Ввести с клавиатуры натуральное число n. Напечатать все его делители, подсчитать и
вывести их количество. Например, делители числа 12: 1 2 3 4 6 12, количество=6*/

#include <stdio.h>

int main()
{
    printf("Enter number\n");
    
    int num;
    scanf("%d", &num);

    int arr[num] = {0};
    int dividers = 0;


    for (int i = 1; i < num + 1; ++i)
    {
        if (num %i == 0)
        {
            arr[i - 1] = i;
            ++dividers;
        }
    }

    printf("Dividers: ");

    for (int i = 0; i < num; ++i)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }

    printf("\n%d dividers\n", dividers);
}
