#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
int e1()
{
    float L = 0;
    int a = 0;
    int x = 0;
    int c = 0;
    printf("x:", x);
    scanf_s("%d", &x);
    printf("a:", a);
    scanf_s("%d", &a);
    printf("с:", c);
    scanf_s("%d", &c);

    L = (sqrt(exp(x) - pow(cos(x * x * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(fabs(a + x * pow(c, 4))));



    printf("L = %f\n", L);
    return L;
}

int e2()
{
    float t = 0;
    printf("write time ");
    scanf_s("%f", &t);
	float v = float((3 * (pow(t, 2))) - (6 * t));
	printf("\nspeed = %f\n", v);
	return v;
}

int e3()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float x1 = 0;
    float x2 = 0;
    printf("\nindex a: ", a);
    scanf_s("%d", &a);
    printf("\nindex b: ", b);
    scanf_s("%d", &b);
    printf("\nindex c: ", c);
    scanf_s("%d", &c);
    if (a == 0)
    {
        printf("\nbad index");
        return 0;
    }
    int D = pow(b, 2) - (4 * a * c);
    if (D > 0)
    {

        x1 = (((-b) + sqrt(D)) / (a * 2));
        x2 = (((-b) - sqrt(D)) / (a * 2));
        printf("\nx1 = %f.2, x2 = %f.2", x1, x2);

    }


    if (D == 0)
    {
        printf("\nradical is %f.2\n", x1);
        return 0;
    }

    return 0;

}

int e4()
{
    int x = 0;
    float min = 0;
    float price = 0;


    printf("Выберите город для звонка:\n ");
    printf("1. В Одессу - код 048\n ");
    printf("2. В Киев - код 044\n ");
    printf("3. В Харьков - код 046\n ");
    printf("4. В Винницу - код 045\n\n ");
    printf("Введите индекс желаемого города, для отмены напишите любой отличный от представленных индекс\n", x);
    scanf_s("%d", &x);
    switch (x)
    {
    case 1:
        printf("\nДлительность звонка в минутах?\n");
        scanf_s("%f", &min);
        price = 15 * min;
        printf("\nЦена = %.2f грн.\n", price);
        break;
    case 2:
        printf("\nДлительность звонка в минутах?\n");
        scanf_s("%f", &min);
        price = 18 * min;
        printf("\nЦена = %.2f грн.\n", price);
        break;
    case 3:
        printf("\nДлительность звонка в минутах?\n");
        scanf_s("%f", &min);
        price = 13 * min;
        printf("\nЦена = %.2f грн.\n", price);
        break;
    case 4:
        printf("Длительность звонка в минутах?\n");
        scanf_s("%f", &min);
        price = 11 * min;
        printf("Цена = %.2f грн.\n", price);
        break;
    default:
        break;

    }

    return 0;
}

int e5()
{
    int n;
    int s;
    for (int i = 1000; i < 10000; i++)
    {
        n = i;
        s = 0;
        for (int j = 0; j < 4; j++)
        {
            s = s + pow((n % 10), 4);
            n = n / 10;
        }
        if (s == i)
            printf("%d ", i);
    }
    return 0;
}

int e6()
{
    int x = 0;
    int i = 0;
    int b = 0;
    int s = 0;


    printf("\nДвоичное число: ");
    scanf_s("%d", &x);

    while (x > 0)
    {
        b = x % 10;
        if (b == 1) 
            s = s + pow(2, i);
        x = x / 10;
        i = i + 1;
    }

    printf("\nЧисло(в сс 10) = %d\n", s);
    return 0;

}

int e7()
{

    int x = 0;
    int I;
    int J;
    int *L;
    int n = 0;
    scanf_s("%d", &I);
    scanf_s("%d", &J);
    printf("\n");
    L = (int*)malloc(I * J * sizeof(int));

    for (int i = 0; i < I*J; ++i)
    {
        L[i] = -((-10 + rand()%20)*3);
        n += 1;
        printf("%d ", L[i]);
        if (n == I)
        {
            printf("\n");
            n = 0;
        }

    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    e1;
    e2;
    e3;
    e4;
    e5;
    e6;
    e7();
	return 0;
}
