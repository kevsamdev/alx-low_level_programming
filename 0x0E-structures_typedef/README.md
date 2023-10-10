<p>0x0E. C - Structures, typedef<br>
C<br>
 By: Julien Barbier<br>
 Weight: 1<br>
 Ongoing second chance project - started Oct 9, 2023 6:00 AM, must end by Oct 11, 2023 6:00 AM<br>
 An auto review will be launched at the deadline<br>
In a nutshell&#8230;<br>
Auto QA review: 0.0/44 mandatory<br>
Altogether: 0.0%<br>
Mandatory: 0.0%<br>
Optional: no optional tasks</p>

<p>
Resources<br>
Read or watch:</p>

<p>0x0d. Structures.pdf<br>
struct (C programming language)<br>
Documentation: structures<br>
0x0d. Typedef and structures.pdf<br>
typedef<br>
Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189<br>
The Lost Art of C Structure Packing (Advanced - not mandatory)<br>
Learning Objectives<br>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</p>

<p>General<br>
What are structures, when, why and how to use them<br>
How to use typedef<br>
Copyright - Plagiarism<br>
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.<br>
You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work.<br>
You are not allowed to publish any content of this project.<br>
Any form of plagiarism is strictly forbidden and will result in removal from the program.<br>
Requirements<br>
General<br>
Allowed editors: vi, vim, emacs<br>
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
All your files should end with a new line<br>
A README.md file, at the root of the folder of the project is mandatory<br>
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
You are not allowed to use global variables<br>
No more than 5 functions per file<br>
The only C standard library functions allowed are printf, malloc, free and exit.<br>
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples<br>
Don&rsquo;t forget to push your header file<br>
All your header files should be include guarded<br>
Quiz questions<br>
Great! You've completed the quiz successfully! Keep going! (Show quiz)<br>
Tasks<br>
0. Poppy<br>
mandatory<br>
Score: 0.0% (Checks completed: 0.0%)</p>

<p>
Define a new type struct dog with the following elements:</p>

<p>name, type = char *<br>
age, type = float<br>
owner, type = char *<br>
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c<br>
#include <stdio.h><br>
#include &quot;dog.h&quot;</p>

<p>/**<br>
 * main - check the code<br>
 *<br>
 * Return: Always 0.<br>
 */<br>
int main(void)<br>
{<br>
 struct dog my_dog;</p>

<p> my_dog.name = &quot;Poppy&quot;;<br>
 my_dog.age = 3.5;<br>
 my_dog.owner = &quot;Bob&quot;;<br>
 printf(&quot;My name is %s, and I am %.1f :) - Woof!\n&quot;, my_dog.name, my_dog.age);<br>
 return (0);<br>
}<br>
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a<br>
julien@ubuntu:~/0x0d. structures, typedef$ ./a <br>
My name is Poppy, and I am 3.5 :) - Woof!<br>
julien@ubuntu:~/0x0d. structures, typedef$ <br>
Repo:</p>

<p>GitHub repository: alx-low_level_programming<br>
Directory: 0x0E-structures_typedef<br>
File: dog.h<br>
 <br>
1. A dog is the only thing on earth that loves you more than you love yourself<br>
mandatory<br>
Score: 0.0% (Checks completed: 0.0%)<br>
Write a function that initialize a variable of type struct dog</p>

<p>Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);<br>
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c<br>
#include <stdio.h><br>
#include &quot;dog.h&quot;</p>

<p>/**<br>
 * main - check the code<br>
 *<br>
 * Return: Always 0.<br>
 */<br>
int main(void)<br>
{<br>
 struct dog my_dog;</p>

<p> init_dog(&amp;my_dog, &quot;Poppy&quot;, 3.5, &quot;Bob&quot;);<br>
 printf(&quot;My name is %s, and I am %.1f :) - Woof!\n&quot;, my_dog.name, my_dog.age);<br>
 return (0);<br>
}<br>
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b<br>
julien@ubuntu:~/0x0d. structures, typedef$ ./b <br>
My name is Poppy, and I am 3.5 :) - Woof!<br>
julien@ubuntu:~/0x0d. structures, typedef$ <br>
Repo:</p>

<p>GitHub repository: alx-low_level_programming<br>
Directory: 0x0E-structures_typedef<br>
File: 1-init_dog.c<br>
 <br>
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad<br>
mandatory<br>
Score: 0.0% (Checks completed: 0.0%)</p>

<p>
Write a function that prints a struct dog</p>

<p>Prototype: void print_dog(struct dog *d);<br>
Format: see example bellow<br>
You are allowed to use the standard library<br>
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))<br>
If d is NULL print nothing.<br>
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c<br>
#include <stdio.h><br>
#include &quot;dog.h&quot;</p>

<p>/**<br>
 * main - check the code<br>
 *<br>
 * Return: Always 0.<br>
 */<br>
int main(void)<br>
{<br>
 struct dog my_dog;</p>

<p> my_dog.name = &quot;Poppy&quot;;<br>
 my_dog.age = 3.5;<br>
 my_dog.owner = &quot;Bob&quot;;<br>
 print_dog(&amp;my_dog);<br>
 return (0);<br>
}<br>
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c<br>
julien@ubuntu:~/0x0d. structures, typedef$ ./c <br>
Name: Poppy<br>
Age: 3.500000<br>
Owner: Bob<br>
julien@ubuntu:~/0x0d. structures, typedef$ <br>
Repo:</p>

<p>GitHub repository: alx-low_level_programming<br>
Directory: 0x0E-structures_typedef<br>
File: 2-print_dog.c<br>
 <br>
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read<br>
mandatory<br>
Score: 0.0% (Checks completed: 0.0%)</p>

<p>
Define a new type dog_t as a new name for the type struct dog.</p>

<p>julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c<br>
#include <stdio.h><br>
#include &quot;dog.h&quot;</p>

<p>/**<br>
 * main - check the code<br>
 *<br>
 * Return: Always 0.<br>
 */<br>
int main(void)<br>
{<br>
 dog_t my_dog;</p>

<p> my_dog.name = &quot;Poppy&quot;;<br>
 my_dog.age = 3.5;<br>
 my_dog.owner = &quot;Bob&quot;;<br>
 printf(&quot;My name is %s, and I am %.1f :) - Woof!\n&quot;, my_dog.name, my_dog.age);<br>
 return (0);<br>
}<br>
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d<br>
julien@ubuntu:~/0x0d. structures, typedef$ ./d <br>
My name is Poppy, and I am 3.5 :) - Woof!<br>
julien@ubuntu:~/0x0d. structures, typedef$ <br>
Repo:</p>

<p>GitHub repository: alx-low_level_programming<br>
Directory: 0x0E-structures_typedef<br>
File: dog.h<br>
 <br>
4. A door is what a dog is perpetually on the wrong side of<br>
mandatory<br>
Score: 0.0% (Checks completed: 0.0%)</p>

<p>
Write a function that creates a new dog.</p>

<p>Prototype: dog_t *new_dog(char *name, float age, char *owner);<br>
You have to store a copy of name and owner<br>
Return NULL if the function fails<br>
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c<br>
#include <stdio.h><br>
#include &quot;dog.h&quot;</p>

<p>/**<br>
 * main - check the code<br>
 *<br>
 * Return: Always 0.<br>
 */<br>
int main(void)<br>
{<br>
 dog_t *my_dog;</p>

<p> my_dog = new_dog(&quot;Poppy&quot;, 3.5, &quot;Bob&quot;);<br>
 printf(&quot;My name is %s, and I am %.1f :) - Woof!\n&quot;, my_dog->name, my_dog->age);<br>
 return (0);<br>
}<br>
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e<br>
julien@ubuntu:~/0x0d. structures, typedef$ ./e<br>
My name is Poppy, and I am 3.5 :) - Woof!<br>
julien@ubuntu:~/0x0d. structures, typedef$ <br>
Repo:</p>

<p>GitHub repository: alx-low_level_programming<br>
Directory: 0x0E-structures_typedef<br>
File: 4-new_dog.c<br>
 <br>
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg<br>
mandatory<br>
Score: 0.0% (Checks completed: 0.0%)</p>

<p>
Write a function that frees dogs.</p>

<p>Prototype: void free_dog(dog_t *d);<br>
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c<br>
#include <stdio.h><br>
#include &quot;dog.h&quot;</p>

<p>/**<br>
 * main - check the code<br>
 *<br>
 * Return: Always 0.<br>
 */<br>
int main(void)<br>
{<br>
 dog_t *my_dog;</p>

<p> my_dog = new_dog(&quot;Poppy&quot;, 3.5, &quot;Bob&quot;);<br>
 printf(&quot;My name is %s, and I am %.1f :) - Woof!\n&quot;, my_dog->name, my_dog->age);<br>
 free_dog(my_dog);<br>
 return (0);<br>
}<br>
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f<br>
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f<br>
==22840== Memcheck, a memory error detector<br>
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.<br>
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info<br>
==22840== Command: ./f<br>
==22840== <br>
My name is Poppy, and I am 3.5 :) - Woof!<br>
==22840== <br>
==22840== HEAP SUMMARY:<br>
==22840== in use at exit: 0 bytes in 0 blocks<br>
==22840== total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated<br>
==22840== <br>
==22840== All heap blocks were freed -- no leaks are possible<br>
==22840== <br>
==22840== For counts of detected and suppressed errors, rerun with: -v<br>
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)<br>
julien@ubuntu:~/0x0d. structures, typedef$ <br>
Repo:</p>

<p>GitHub repository: alx-low_level_programming<br>
Directory: 0x0E-structures_typedef<br>
File: 5-free_dog.c</p>
