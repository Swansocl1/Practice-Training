hello.c

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input a name and output a greeting
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
