#include <stdio.h>
#include <stdlib.h>

/**
 * main - Asks the user if they love the programmer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char answer, reply;
    int rate = 1;

    printf("Do you love me? (y/N)\n");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y')
    {
        printf("Oh wow that's great, I LOVE YOU TOO! (y/n)\n");
    }
    else
    {
        printf("That's okay, maybe we can still be friends?\n");
    }
	printf("y/n\n");
    scanf(" %c", &reply);

    if (reply == 'y' || reply == 'Y')
    {
        printf("Nice to be your new friend!\n");
    }
    else
    {
        printf("Well, okay then...\n");
    }
	printf("I'm a beginner in C programming language :)\n");
	    printf("Rate my program on a scale of 1-10\n");
		scanf("%d", &rate);
	    if (rate <= 10 && rate != 0)
	    {
		    printf("Thanks for giving me the rate of %d out of 10\n", rate);
		    printf("Have a great day, I'll keep learning!! :)\n");

	    }
	    else
	    {
		    printf("so sad, I'll keep doing my best! :(\n");
	    }

    return (0);
}
