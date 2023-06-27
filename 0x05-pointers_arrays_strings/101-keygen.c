#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_char = rand() % 26 + 'a';

		password[i] = (char)random_char;
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated passwordd: %s\n", password);

	return (0);
}
