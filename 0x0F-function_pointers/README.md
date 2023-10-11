<div style="text-align: start;color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div>
        <h2 style="color: inherit;font-size: 30px;">Resources</h2>
        <p><strong><strong>Read or watch</strong></strong>:</p>
        <ul>
            <li><a href="https://intranet.alxswe.com/rltoken/yt8Q9jxzT_gyRAvnNkAgkw" title="Function Pointer in C" target="_blank" style="color: transparent;">Function Pointer in C</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/wP-yWvo9IqbcQsywMmh_iQ" title="Pointers to functions" target="_blank" style="color: transparent;">Pointers to functions</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/dAN27S1yyBPeBa8RGfvPNA" title="Function Pointers in C / C++" target="_blank" style="color: transparent;">Function Pointers in C / C++</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/1vvWpH9Ux8axOLc9jPWcMw" title="why pointers to functions?" target="_blank" style="color: transparent;">why pointers to functions?</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/G_0lQzs4LAd1e5tKhNMPiw" title="Everything you need to know about pointers in C" target="_blank" style="color: transparent;">Everything you need to know about pointers in C</a></li>
        </ul>
        <h2 style="color: inherit;font-size: 30px;">Learning Objectives</h2>
        <p>At the end of this project, you are expected to be able to <a href="https://intranet.alxswe.com/rltoken/ITYG4BLMI4_5Unpdwue2tw" title="explain to anyone" target="_blank" style="color: transparent;">explain to anyone</a>, <strong><strong>without the help of Google</strong></strong>:</p>
        <h3 style="color: inherit;font-size: 24px;">General</h3>
        <ul>
            <li>What are function pointers and how to use them</li>
            <li>What does a function pointer exactly hold</li>
            <li>Where does a function pointer point to in the virtual memory</li>
        </ul>
        <h3 style="color: inherit;font-size: 24px;">Copyright - Plagiarism</h3>
        <ul>
            <li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
            <li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work.</li>
            <li>You are not allowed to publish any content of this project.</li>
            <li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
        </ul>
        <h2 style="color: inherit;font-size: 30px;">Requirements</h2>
        <h3 style="color: inherit;font-size: 24px;">General</h3>
        <ul>
            <li>Allowed editors: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">vi</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">vim</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">emacs</code></li>
            <li>All your files will be compiled on Ubuntu 20.04 LTS using <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">gcc</code>, using the options <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
            <li>All your files should end with a new line</li>
            <li>A <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">README.md</code> file, at the root of the folder of the project is mandatory</li>
            <li>Your code should use the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank" style="color: transparent;">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank" style="color: transparent;">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>The only C standard library functions allowed are <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">malloc</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">free</code> and <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">exit</code>. Any use of functions like <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">printf</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">puts</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">calloc</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">realloc</code> etc&hellip; is forbidden</li>
            <li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank" style="color: transparent;">_putchar</a></li>
            <li>You don&rsquo;t have to push <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
            <li>In the following examples, the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main.c</code> files at compilation. Our <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main.c</code> files might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions and the prototype of the function <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">_putchar</code> should be included in your header file called <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">function_pointers.h</code></li>
            <li>Don&rsquo;t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
        </ul>
    </div>
</div>
<div style="text-align: start;color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);">
        <h3 style="color: rgb(51, 51, 51);font-size: 16px;">Quiz questions</h3>
    </div>
    <div>
        <div style="color: rgb(152, 163, 174);background-color: rgb(238, 240, 241);"><strong><strong>Great!</strong></strong> You&apos;ve completed the quiz successfully! Keep going! <u>(Show quiz)</u></div>
    </div>
</div>
<h2 style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 30px;">Tasks</h2>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">0. What&apos;s my name</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>Write a function that prints a name.</p>
            <ul>
                <li>Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">void print_name(char *name, void (*f)(char *));</code></li>
            </ul>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;"><code style="color: inherit;font-size: inherit;">julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &quot;function_pointers.h&quot;

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf(&quot;Hello, my name is %s\n&quot;, name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf(&quot;Hello, my uppercase name is &quot;);
    i = 0;
    while (name[i])
    {
        if (name[i] &gt;= &apos;a&apos; &amp;&amp; name[i] &lt;= &apos;z&apos;)
        {
            putchar(name[i] + &apos;A&apos; - &apos;a&apos;);
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name(&quot;Bob&quot;, print_name_as_is);
    print_name(&quot;Bob Dylan&quot;, print_name_uppercase);
    printf(&quot;\n&quot;);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$ 
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x0F-function_pointers</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0-print_name.c</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Check your code</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Get a sandbox</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">1. If you spend too much time thinking about a thing, you&apos;ll never get it done</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>Write a function that executes a function given as a parameter on each element of an array.</p>
            <ul>
                <li>Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
                <li>where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">size</code> is the size of the array</li>
                <li>and <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">action</code> is a pointer to the function you need to use</li>
            </ul>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;"><code style="color: inherit;font-size: inherit;">julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &quot;function_pointers.h&quot;

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf(&quot;%d\n&quot;, elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf(&quot;0x%x\n&quot;, elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &amp;print_elem);
    array_iterator(array, 5, &amp;print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$ 
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x0F-function_pointers</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">1-array_iterator.c</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Check your code</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Get a sandbox</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">2. To hell with circumstances; I create opportunities</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>Write a function that searches for an integer.</p>
            <ul>
                <li>Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int int_index(int *array, int size, int (*cmp)(int));</code></li>
                <li>where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">size</code> is the number of elements in the array <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">array</code></li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">cmp</code> is a pointer to the function to be used to compare values</li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int_index</code> returns the index of the first element for which the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">cmp</code> function does not return <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0</code></li>
                <li>If no element matches, return <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-1</code></li>
                <li>If size &lt;= <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0</code>, return <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-1</code></li>
            </ul>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;"><code style="color: inherit;font-size: inherit;">julien@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &quot;function_pointers.h&quot;

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem &gt; 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf(&quot;%d\n&quot;, index);
    index = int_index(array, 20, abs_is_98);
    printf(&quot;%d\n&quot;, index);
    index = int_index(array, 20, is_strictly_positive);
    printf(&quot;%d\n&quot;, index);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c 
2
1
2
julien@ubuntu:~/0x0e. Function pointers$ 
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x0F-function_pointers</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">2-int_index.c</code></li>
                </ul>
            </div>
        </div>
        <div style="color: rgb(245, 245, 245);background-color: rgb(245, 245, 245);">
            <div>
                <div><button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">&nbsp;Done?</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Help</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Check your code</button> <button style="text-align: center;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 12px;">Get a sandbox</button></div>
                <div style="font-size: 1.5rem !important;"><br></div>
            </div>
        </div>
    </div>
</div>
<div style="text-align: start;color: rgb(51, 51, 51);background-color: rgb(255, 255, 255);font-size: 14px;">
    <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
        <div style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);">
            <h3 style="color: rgb(51, 51, 51);font-size: 16px;">3. A goal is not always meant to be reached, it often serves simply as something to aim at</h3>
            <div><strong><span style="text-align: center;color: rgb(255, 255, 255);background-color: rgb(152, 163, 174);font-size: 10.5px;">mandatory</span></strong></div>
        </div>
        <div>
            <p>Write a program that performs simple operations.</p>
            <ul>
                <li>You are allowed to use the standard library</li>
                <li>Usage: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">calc num1 operator num2</code></li>
                <li>You can assume <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">num1</code> and <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">num2</code> are integers, so use the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">atoi</code> function to convert them from the string input to <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int</code></li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">operator</code>is one of the following:<ul>
                        <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">+</code>: addition</li>
                        <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-</code>: subtraction</li>
                        <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">*</code>: multiplication</li>
                        <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">/</code>: division</li>
                        <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">%</code>: modulo</li>
                    </ul>
                </li>
                <li>The program prints the result of the operation, followed by a new line</li>
                <li>You can assume that the result of all operations can be stored in an <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int</code></li>
                <li>if the number of arguments is wrong, print <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">Error</code>, followed by a new line, and exit with the status <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">98</code></li>
                <li>if the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">operator</code> is none of the above, print <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">Error</code>, followed by a new line, and exit with the status <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">99</code></li>
                <li>if the user tries to divide (<code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">/</code> or <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">%</code>) by <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0</code>, print <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">Error</code>, followed by a new line, and exit with the status <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">100</code></li>
            </ul>
            <p>This task requires that you create four different files.</p>
            <p><strong><strong>3-calc.h</strong></strong></p>
            <p>This file should contain all the function prototypes and data structures used by the program. You can use this structure:</p>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;"><code style="color: inherit;font-size: inherit;">/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
</code></pre>
            <p><strong><strong>3-op_functions.c</strong></strong></p>
            <p>This file should contain the 5 following functions (not more):</p>
            <ul>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_add</code>: returns the sum of <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">a</code> and <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">b</code>. Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int op_add(int a, int b);</code></li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_sub</code>: returns the difference of <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">a</code> and <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">b</code>. Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int op_sub(int a, int b);</code></li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_mul</code>: returns the product of <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">a</code> and <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">b</code>. Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int op_mul(int a, int b);</code></li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_div</code>: returns the result of the division of <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">a</code> by <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">b</code>. Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int op_div(int a, int b);</code></li>
                <li><code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_mod</code>: returns the remainder of the division of <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">a</code> by <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">b</code>. Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int op_mod(int a, int b);</code></li>
            </ul>
            <p><strong><strong>3-get_op_func.c</strong></strong></p>
            <p>This file should contain the function that selects the correct function to perform the operation asked by the user. You&rsquo;re not allowed to declare any other function.</p>
            <ul>
                <li>Prototype: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int (*get_op_func(char *s))(int, int);</code></li>
                <li>where <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">s</code> is the operator passed as argument to the program</li>
                <li>This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">get_op_func(&quot;+&quot;)</code> should return a pointer to the function <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_add</code></li>
                <li>You are not allowed to use <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">switch</code> statements</li>
                <li>You are not allowed to use <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">for</code> or <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">do ... while</code> loops</li>
                <li>You are not allowed to use <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">goto</code></li>
                <li>You are not allowed to use <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">else</code></li>
                <li>You are not allowed to use more than one <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">if</code> statement in your code</li>
                <li>You are not allowed to use more than one <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">while</code> loop in your code</li>
                <li>If <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">s</code> does not match any of the 5 expected operators (<code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">+</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">-</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">*</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">/</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">%</code>), return <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">NULL</code></li>
                <li>You are only allowed to declare these two variables in this function:</li>
            </ul>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;"><code style="color: inherit;font-size: inherit;">    op_t ops[] = {
        {&quot;+&quot;, op_add},
        {&quot;-&quot;, op_sub},
        {&quot;*&quot;, op_mul},
        {&quot;/&quot;, op_div},
        {&quot;%&quot;, op_mod},
        {NULL, NULL}
    };
    int i;
</code></pre>
            <p><strong><strong>3-main.c</strong></strong></p>
            <p>This file should contain your <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main</code> function only.</p>
            <ul>
                <li>You are not allowed to code any other function than <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main</code> in this file</li>
                <li>You are not allowed to directly call <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_add</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_sub</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_mul</code>, <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_div</code> or <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">op_mod</code> from the <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">main</code> function</li>
                <li>You have to use <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">atoi</code> to convert arguments to <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">int</code></li>
                <li>You are not allowed to use any kind of loop</li>
                <li>You are allowed to use a maximum of 3 <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">if</code> statements</li>
            </ul>
            <p><strong><strong>Compilation and examples</strong></strong></p>
            <pre style="color: rgb(51, 51, 51);background-color: rgb(245, 245, 245);font-size: 13px;"><code style="color: inherit;font-size: inherit;">julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
julien@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 &apos;*&apos; 98
100352
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 &apos;\*&apos; 98
Error
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 &apos;%&apos; 98
44
julien@ubuntu:~/0x0e. Function pointers$ 
</code></pre>
        </div>
        <div>
            <div style="color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);">
                <p><strong><strong>Repo:</strong></strong></p>
                <ul>
                    <li>GitHub repository: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">alx-low_level_programming</code></li>
                    <li>Directory: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">0x0F-function_pointers</code></li>
                    <li>File: <code style="color: rgb(199, 37, 78);background-color: rgb(249, 242, 244);font-size: 12.6px;">3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
