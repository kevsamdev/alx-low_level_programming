#include <main.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c[] = "_putchar";
for (i = 0; i < 8; i++)
{putchar(c[i]);
}
putchar('\n');
return (0);
}
