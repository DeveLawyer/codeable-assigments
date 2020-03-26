#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float change_owed;
    int coins = 0;

    do
    {
        change_owed = get_float("How much change do we owe you?\n");
    } while (change_owed < 0);

    int cents = round(change_owed * 100);

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("Change owed: %.2f\n", change_owed);
    printf("%i\n", coins);
}
