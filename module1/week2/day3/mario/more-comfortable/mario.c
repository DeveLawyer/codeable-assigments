#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //This will prompt from a number between 1 to 8
    do
    {
        height = get_int("Enter the height:\n");
    } while (height < 1 || height > 8);

    for (int row = 1; row <= height; row++)
    {
        // right-aligned pyramid
        for (int blank = 0; blank < height - row; blank++)
        {
            printf(" ");
        }
        for (int brick = 0; brick < row; brick++)
        {
            printf("#");
        }
        printf("  ");
        // left-aligned pyramid
        for (int brick = 0; brick < row; brick++)
        {
            printf("#");
        }
        printf("\n");
    }
}
