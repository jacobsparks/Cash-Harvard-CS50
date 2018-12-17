#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float userIn;
    int c;


    do
    {
        userIn = get_float("Change owed: ");  // Getting and validating user input
    }
    while (userIn < 0);

    userIn *= 100; // Converting float to integer
    userIn = round(userIn); // Rounding to nearest penny
    c = 0;

    while (userIn > 0) // Figuring out the minimun number of coins that can be given back
    {
        if (userIn >= 25)
        {
            userIn -= 25;
            c++;
        }
        else if (userIn >= 10)
        {
            userIn -= 10;
            c++;
        }
        else if (userIn >= 5)
        {
            userIn -= 5;
            c++;
        }
        else
        {
            userIn -= 1;
            c++;
        }

    }

    printf("Coins used: %d\n", c);
}