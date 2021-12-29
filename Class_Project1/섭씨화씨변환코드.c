#include <stdio.h>

float main3_5() // main이 아닐때는 반드시 리턴해줘야함. // 3_5
{
    char c; double d, degree;
    char type;

    printf("input your degree ex. 36.5 C or 97.7 F:\n");
    scanf("%lf %c", &d, &c);
    printf("input was %.2f %c\n", d, c);

    if (c == 'C' || c == 'c') // 1문장이면 {}생략 가능. 여러문장이면 당연히 써야함
    {
        /* C-> F*/
        degree = 9. / 5. * d + 32.0;
        type = 'F';
    }
    else if ('F' == c || 'f' == c)
    {
        /* F-> C*/
        degree = 5. / 9. * (d - 32.0);
        type = 'C';
    }
    else
    {
        printf("degree selection error\n");
        return 0;
    }

    printf("converted degree %.2f %c\n", degree, type);
}