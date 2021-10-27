# <b>0x0B. C - malloc, free</b>

## Resources
Read or watch:

<li>0x0a - malloc & free - quick overview.pdf</i>
<li>Dynamic memory allocation in C - malloc calloc realloc free</i>
<br></br>

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
<br></br>

## General
<li>What is the difference between automatic and dynamic allocation</li>
<li>What is malloc and free and how to use them</li>
<li>Why and when use malloc</li>
<li>How to use valgrind to check for memory leak</li>
<br></br>

## Requirements
### <i>General</i>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code> and <code>free</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>
<br></br>

## Tasks
<b>0. Float like a butterfly, sting like a bee</b>

Write a function that creates an array of chars, and initializes it with a specific char.

<ul>
<li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
<li>Returns <code>NULL</code> if size = <code>0</code></li>
<li>Returns a pointer to the array, or <code>NULL</code> if it fails</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i &lt; size)
    {
        if (i % 10)
        {
            printf(&quot; &quot;);
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf(&quot;\n&quot;);
        }
        printf(&quot;0x%02x&quot;, buffer[i]);
        i++;
    }
    printf(&quot;\n&quot;);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, &#39;H&#39;);
    if  (buffer == NULL)
    {
        printf(&quot;failed to allocate memory\n&quot;);
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>
<br></br>

<b>1. The woman who has no imagination has no wings</b>

<p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>

<ul>
<li>Prototype: <code>char *_strdup(char *str);</code></li>
<li>The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>.  Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.</li>
<li>Returns <code>NULL</code> if str = NULL</li>
<li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string.  It returns <code>NULL</code> if insufficient memory was available</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup(&quot;Duplicated&quot;);
    if (s == NULL)
    {
        printf(&quot;failed to allocate memory\n&quot;);
        return (1);
    }
    printf(&quot;%s\n&quot;, s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
julien@ubuntu:~/0x0a. malloc, free$ ./s 
Duplicated
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>
<br></br>

<b>2. He who is not courageous enough to take risks will accomplish nothing in life</b>

<p>Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated</li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
<li>The function should return <code>NULL</code> on failure</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat(&quot;Best &quot;, &quot;School&quot;);
    if (s == NULL)
    {
        printf(&quot;failed\n&quot;);
        return (1);
    }
    printf(&quot;%s\n&quot;, s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat
julien@ubuntu:~/0x0a. malloc, free$ ./2-str_concat | cat -e
Best School$
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
<br></br>

<b>3. If you even dream of beating me you'd better wake up and apologize</b>

<p>Write a function that returns a pointer to a 2 dimensional array of integers.</p>

<ul>
<li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
<li>Each element of the grid should be initialized to <code>0</code></li>
<li>The function should return <code>NULL</code> on failure</li>
<li>If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 3-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h &lt; height)
    {
        w = 0;
        while (w &lt; width)
        {
            printf(&quot;%d &quot;, grid[h][w]);
            w++;
        }
        printf(&quot;\n&quot;);
        h++;
    }   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf(&quot;\n&quot;);
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o 3-alloc_grid
julien@ubuntu:~/0x0a. malloc, free$ ./3-alloc_grid
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
<br></br>

<b>4. It's not bragging if you can back it up</b>

<p>Write a function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p>

<ul>
<li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
<li>Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 4-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h &lt; height)
    {
        w = 0;
        while (w &lt; width)
        {
            printf(&quot;%d &quot;, grid[h][w]);
            w++;
        }
        printf(&quot;\n&quot;);
        h++;
    }   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf(&quot;\n&quot;);
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o 4-free_grid
julien@ubuntu:~/0x0a. malloc, free$ valgrind ./4-free_grid
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>
<br></br>

<b>5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe</b>

<p>Write a function that concatenates all the arguments of your program.</p>

<ul>
<li>Prototype: <code>char *argstostr(int ac, char **av);</code></li>
<li>Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code></li>
<li>Returns a pointer to a new string, or <code>NULL</code> if it fails</li>
<li>Each argument should be followed by a <code>\n</code> in the new string</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 100-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf(&quot;%s&quot;, s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
julien@ubuntu:~/0x0a. malloc, free$ ./args I will &quot;show you&quot; how great I am
./args
I
will
show you
how
great
I
am
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
<br></br>

<b>6. I will show you how great I am</b>

<p>Write a function that splits a string into words.</p>

<ul>
<li>Prototype: <code>char **strtow(char *str);</code></li>
<li>The function returns a pointer to an array of strings (words)</li>
<li>Each element of this array should contain a single word, null-terminated</li>
<li>The last element of the returned array should be <code>NULL</code></li>
<li>Words are separated by spaces</li>
<li>Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == &quot;&quot;</code></li>
<li>If your function fails, it should return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 101-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf(&quot;%s\n&quot;, tab[i]);
    }
}

/**
 * main - check the code
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow(&quot;      Best School         #cisfun      &quot;);
    if (tab == NULL)
    {
        printf(&quot;Failed\n&quot;);
        return (1);
    }
    print_tab(tab);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
julien@ubuntu:~/0x0a. malloc, free$ ./strtow | cat -e
Best$
School$
#cisfun$
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
