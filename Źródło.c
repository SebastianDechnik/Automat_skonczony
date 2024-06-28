#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i = 0;
    printf("Program symuluje dzialanie automatu skonczonego i rysuje diagram przejsc.\nNa diagramie kolorem czerwonym zaznaczony jest aktualny stan.\n");
    printf("Podaj dlugosc lancucha:  ");
    scanf_s("%d", &n);
    printf("\n");
    int f[1000];
    int x = 3;
    printf("Diagram przejsc:\n\n");
    printf("|-----------|                     |-----------|\n");
    printf("|           |---------1---------->|           |\n");
    printf("|     q0    |                     |     q1    |\n");
    printf("|           |<--------1-----------|           |\n");
    printf("|-----------|                     |-----------|\n");
    printf("    |   /|                            |   /|\n");
    printf("    |   |                             |   |\n");
    printf("    |   |                             |   |\n");
    printf("    |   |                             |   |\n");
    printf("    |   |                             |   |\n");
    printf("    0   0                             0   0\n");
    printf("    |   |                             |   |\n");
    printf("    |   |                             |   |\n");
    printf("    |   |                             |   |\n");
    printf("    |   |                             |   |\n");
    printf("   |/   |                            |/   |\n");
    printf("|-----------|                     |-----------|\n");
    printf("|           |---------1---------->|           |\n");
    printf("|     q2    |                     |     \033[0;31mq3\033[0m    |<----|START|\n");
    printf("|           |<--------1-----------|           |\n");
    printf("|-----------|                     |-----------|\n");

    for (i; i < n; i++)
    {
        scanf_s("%d", &f[i]);
        switch (x) {
        case 0:
            if (f[i] == 0)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q0    |                     |     q1    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     \033[0;31mq2\033[0m    |                     |     q3    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 2;
                break;
            }
            else if (f[i] == 1)
            {
                printf("\033[22A");
                printf("\033[k");

                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q0    |                     |     \033[0;31mq1\033[0m    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q2    |                     |     q3    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 1;
                break;
            }
            else
            {
                x = 0;
                printf("\033[1A");
                printf("\033[k");
                break;
            }
        case 1:
            if (f[i] == 0)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q0    |                     |     q1    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q2    |                     |     \033[0;31mq3\033[0m    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");

                x = 3;
                break;
            }
            else if (f[i] == 1)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     \033[0;31mq0\033[0m    |                     |     q1    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q2    |                     |     q3    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 0;
                break;
            }
            else
            {
                x = 1;
                printf("\033[1A");
                printf("\033[k");
                break;
            }
        case 2:
            if (f[i] == 0)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     \033[0;31mq0\033[0m    |                     |     q1    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q2    |                     |     q3    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 0;
                break;
            }
            else if (f[i] == 1)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q0    |                     |     q1    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q2    |                     |     \033[0;31mq3\033[0m    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 3;
                break;
            }
            else
            {
                x = 2;
                printf("\033[1A");
                printf("\033[k");
                break;
            }
        case 3:
            if (f[i] == 0)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q0    |                     |     \033[0;31mq1\033[0m    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q2    |                     |     q3    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 1;
                break;
            }
            else if (f[i] == 1)
            {
                printf("\033[22A");
                printf("\033[k");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     q0    |                     |     q1    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                printf("    |   /|                            |   /|\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    0   0                             0   0\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("    |   |                             |   |\n");
                printf("   |/   |                            |/   |\n");
                printf("|-----------|                     |-----------|\n");
                printf("|           |---------1---------->|           |\n");
                printf("|     \033[0;31mq2\033[0m    |                     |     q3    |\n");
                printf("|           |<--------1-----------|           |\n");
                printf("|-----------|                     |-----------|\n");
                x = 2;
                break;
            }
            else
            {
                x = 3;
                printf("\033[1A");
                printf("\033[k");
                break;
            }
        }
    }
    x = 3;
    printf(" \n");
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 1 || f[i] == 0)
        {
        }
        else
        {
            printf("Lancuch {");
            for (int i = 0; i < n; i++)
                printf(" %d ", f[i]);
            printf("} niezaakceptowany\n");
            return 0;
        }
    }
    printf("Lancuch {");
    for (int i = 0; i < n; i++)
        printf(" %d ", f[i]);
    printf("} zaakceptowany\n");
    printf("Sekwencja przejsc:\n");
    printf("\033[0;32mq3\033[0m");
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++) {
            switch (x) {
            case 0:
                if (f[i] == 0)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->\033[0;31mq2\033[0m\n", f[i]);
                        printf("Sekwencja zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->\033[0;31mq2\033[0m", f[i]);
                        x = 2;
                    }
                    break;
                }
                else if (f[i] == 1)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->q1\n", f[i]);
                        printf("Sekwencja nie zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->q1", f[i]);
                        x = 1;
                    }
                    break;
                }
            case 1:
                if (f[i] == 0)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->q3\n", f[i]);
                        printf("Sekwencja nie zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->q3", f[i]);
                        x = 3;
                    }
                    break;
                }
                else if (f[i] == 1)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->q0\n", f[i]);
                        printf("Sekwencja nie zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->q0", f[i]);
                        x = 0;
                    }
                    break;
                }
            case 2:
                if (f[i] == 0)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->q0\n", f[i]);
                        printf("Sekwencja nie zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->q0", f[i]);
                        x = 0;
                    }
                    break;
                }
                else if (f[i] == 1)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->q3\n", f[i]);
                        printf("Sekwencja nie zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->q3", f[i]);
                        x = 3;
                    }
                    break;
                }
            case 3:
                if (f[i] == 0)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->q1\n", f[i]);
                        printf("Sekwencja nie zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->q1", f[i]);
                        x = 1;
                    }
                    break;
                }
                else if (f[i] == 1)
                {
                    if (i + 1 == n)
                    {
                        printf("--%d-->\033[0;31mq2\033[0m\n", f[i]);
                        printf("Sekwencja zakonczyla sie w stanie akceptowalnym");
                    }
                    else {
                        printf("--%d-->\033[0;31mq2\033[0m", f[i]);
                        x = 2;
                    }
                    break;
                }
            }
        }
        break;
    }
    return 0;
}
