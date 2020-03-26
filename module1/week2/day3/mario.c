#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the height: ");
    } while (height < 1 || height > 8);

    for (int row = 0; row < height; row++)
    {
        for (int dot = 0; dot < height - row - 1; dot++)
        {
            printf(" ");
        }
        for (int brick = 0; brick < row + 1; brick++)
        {
            printf("#");
        }
        printf("\n");
    }
}
