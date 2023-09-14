#include "main.h"
/**
* _putchar - Write a character to stdout.
* @c: The character to write.
*/
void _putchar(char c)
{
}
int _isupper(int c){
if (c >= 'A' && c <= 'Z') 
{
return (1);
} else 
{
return (0);
}
}
int main(void) 
{
char testChar = 'A'; /
if (_isupper(testChar)) 
{
_putchar('1'); 
} else 
{
_putchar('0'); 
return (0);
}
