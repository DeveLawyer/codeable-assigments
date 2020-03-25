#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // This prompts for a string input
    string name = get_string("What's your name?\n");
    //This outputs a message
    printf("hello, %s\n", name);
}