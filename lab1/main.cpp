#include <stdio.h>
#define ARRAY_SIZE 50
void InputArray(int *array, int n)
{

    for (int i = 0; i < n; i++)
    {
        {
            printf("input [%d] element\n", i);
            scanf("%d", &array[i]);
        }
    }
}
void Pointer (int *array, int n)
{
    int *ptrthirdelement, *ptrsixthelement;
    ptrthirdelement = &array[3];
    ptrsixthelement = &array[6];
    printf("Address of the third element equals\n");
    printf("%x\n", ptrthirdelement);
    printf("Address of the sixth element equals\n");
    printf("%x\n", ptrsixthelement);
}

void Calculate(int *array, int n)
{
    while (array[0] < array[1])
    {
        printf("Address of the first element equals\n");
        printf("%x\n", &array[0]);
        printf("Element value equals\n");
        printf("%x\n", array[0]);
        int ptr = &array[0];
        (array[0])++;
        (ptr++);
    }
}



int main()
{
    int *array;
    InputArray(array, 10);
    Pointer(array, 10);
    Calculate(array, 10);
    return 0;
}
