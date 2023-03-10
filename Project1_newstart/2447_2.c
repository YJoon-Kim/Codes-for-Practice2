#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** pattern(int N)
{
    char** a = NULL;
    char** b = NULL;
    char** c = NULL;

    if (N == 1)
    {
        a = (char**)malloc(sizeof(char*));
        *a = (char*)malloc(2 * sizeof(char));
        (*a)[0] = '*';
        (*a)[1] = '\0';
        return a;
    }
    else
    {
        c = pattern(N / 3);

        a = (char**)malloc((N + 1) * sizeof(char*));
        for (int i = 0; i < N / 3; i++)
        {
            a[i] = (char*)malloc((N + 1) * sizeof(char));
            memset(a[i], '*', 3 * sizeof(char));
            a[i][3] = '\0';
        }
        for (int i = N / 3; i < N * 2 / 3; i++)
        {
            a[i] = (char*)malloc((N + 1) * sizeof(char));
            memset(a[i], ' ', (N / 3) * sizeof(char));
            memset(a[i] + N / 3, 0, sizeof(char));
            strcat(a[i], c[i - N / 3]);
            strcat(a[i], " ");
            strcat(a[i], c[i - N / 3]);
        }
        for (int i = N * 2 / 3; i < N; i++)
        {
            a[i] = (char*)malloc((N + 1) * sizeof(char));
            memset(a[i], '*', 3 * sizeof(char));
            a[i][3] = '\0';
        }

        b = (char**)malloc(N * sizeof(char*));
        for (int i = 0; i < N; i++)
        {
            b[i] = (char*)malloc((N + 1) * sizeof(char));
            strcpy(b[i], a[i]);
        }

        for (int i = 0; i < N / 3; i++)
            free(c[i]);
        free(c);
        for (int i = 0; i < N; i++)
            free(a[i]);
        free(a);

        return b;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    char** result = pattern(N);

    for (int i = 0; i < N; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}