/*Ввести с клавиатуры целое число n и ввести n натуральных чисел. Выяснить, является
ли последовательность этих чисел такой, в которой двухзначные и трехзначные числа
идут по очереди. Например, для последовательностей 34 678 12 897 23 или 674 12 567
43 ответ будет «Да».*/

#include <stdio.h>

int main()
{
    printf("enter how many numbers you want to write\n");

    int size;

    scanf("%d", &size);

    printf("enter %d numbers\n", size);

    int num1, num2;

    scanf("%d", &num1);

    if (num1 < 1 && num1 > 999)
        printf("no\n");
    

    for (int i = 1; i < size; ++i)
    {
        scanf("%d", &num2);
        if ((9 < num1 && num1 < 100 && 99 < num2 && num2 < 1000) || 
            (99 < num1 && num1 < 1000 && 9 < num2 && num2 < 100))
            num1 = num2;
        else
        {
            printf("no\n");
            break;
        }
        
        if (i == size - 1)
            printf("yes\n");
    }

    return 0;
}
