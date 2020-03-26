#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long credit_card = get_long("Enter the credit card number:\n");

    printf("Number: %li\n", credit_card);
}
