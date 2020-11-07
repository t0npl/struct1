#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
int main()
{
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i, i_max, i_min, t, s;
    float average = 0, sum = 0;
    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for (i = 0; i < SIZE; i++) {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
    }
    i_max = st[0].marking;
    for (i = 0; i < SIZE - 1; i++)
    {
        if (st[i + 1].marking > st[i].marking) {
            i_max = st[i + 1].marking;
        }
    }
    i_min = st[0].marking;
    for (i = 0; i < SIZE - 1; i++)
    {
        if (st[i + 1].marking < st[i].marking)
        {
            i_min = st[i + 1].marking;
        }
    }
    sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum = sum + st[i].marking;
    }
    average = sum / SIZE;
    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n", average);
    printf("Min -- Max      = %d --> %d\n", i_min, i_max);

    return 0;

}