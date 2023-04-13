#include <stdio.h>
int main()
{
    float a, b, c, d, average, e;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    average = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", average);
    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (average >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        if (e + average / 2.0 > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (e + average ) / 2.0);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
