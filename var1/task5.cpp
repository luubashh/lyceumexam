/*Ввести с клавиатуры натуральные числа n, m, t. Получите новое число K так:
припишите число m в конец числа n. Затем K умножьте на t, например, для чисел
n=1234, m=67 и t=5, ответ должен быть таким: К=123467, К*5=617335. А для чисел
n=67, m=1234 и t=5, ответ должен быть таким: К=671234, К*5=3356170.*/

#include <stdio.h>

int main()
{
    printf("enter 3 numbers\n");
    
    int m, n, t, k;
    
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &t);

    int sizen = 10;

    while (sizen < 10000000)
    {
        if (n < sizen)
            break;
        sizen = sizen * 10;
    }

    k = (m * sizen + n) * t;
    printf("answer: %d\n", k);

    return 0;
}
