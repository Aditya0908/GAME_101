// NUMBER GUESSING GAME

#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int n, a, nguesses = 1;
    srand(time(0));
    n = rand() % 100 + 1;
    // printf("the no is %d\n",n);
    do
    {
        printf("guess a no between 1-100\n");
        scanf("%d", &a);
        if (a > n)
        {
            printf("lower no plzz\n");
        }
        else if (a < n)
        {
            printf("higher no plz\n");
        }
        else
        {
            printf("u guesssed in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (a != n);

    return 0;
}
