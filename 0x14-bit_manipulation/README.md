# <b>0x14. C - Bit manipulation</b>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/3N9o0-Gy3fxQoXJy6TUUHw" title="Google" target="_blank">Google</a> </li>
<li><a href="/rltoken/7jk6HSHSs-DdXMEPKW1MoQ" title="Youtube" target="_blank">Youtube</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/-ZIYjWJH7o7oKoASL2Hs1w" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Look for the right source of information without too much help</li>
<li>How to manipulate bits and use bitwise operators</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<br></br>

## Tasks
<b>0. 0</b>

<p>Write a function that converts a binary number to an <code>unsigned int</code>.</p>

<ul>
<li>Prototype: <code>unsigned int binary_to_uint(const char *b);</code></li>
<li>where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars</li>
<li>Return: the converted number, or 0 if

<ul>
<li>there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code></li>
<li><code>b</code> is <code>NULL</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint(&quot;1&quot;);
    printf(&quot;%u\n&quot;, n);
    n = binary_to_uint(&quot;101&quot;);
    printf(&quot;%u\n&quot;, n);
    n = binary_to_uint(&quot;1e01&quot;);
    printf(&quot;%u\n&quot;, n);
    n = binary_to_uint(&quot;1100010&quot;);
    printf(&quot;%u\n&quot;, n);
    n = binary_to_uint(&quot;0000000000000000000110010010&quot;);
    printf(&quot;%u\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>

<b>1. 1</b>

<p>Write a function that prints the binary representation of a number.</p>

<ul>
<li>Prototype: <code>void print_binary(unsigned long int n);</code></li>
<li>Format: see example</li>
<li>You are not allowed to use arrays</li>
<li>You are not allowed to use <code>malloc</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf(&quot;\n&quot;);
    print_binary(1);
    printf(&quot;\n&quot;);
    print_binary(98);
    printf(&quot;\n&quot;);
    print_binary(1024);
    printf(&quot;\n&quot;);
    print_binary((1 &lt;&lt; 10) + 1);
    printf(&quot;\n&quot;);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>

<b>2. 10</b>

<p>Write a function that returns the value of a bit at a given index.</p>

<ul>
<li>Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get</li>
<li>Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf(&quot;%d\n&quot;, n);
    n = get_bit(98, 1);
    printf(&quot;%d\n&quot;, n);
    n = get_bit(1024, 0);
    printf(&quot;%d\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c  
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>

<b>3. 11</b>

<p>Write a function that sets the value of a bit to <code>1</code> at a given index.</p>

<ul>
<li>Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 3-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&amp;n, 5);
    printf(&quot;%lu\n&quot;, n);
    n = 0;
    set_bit(&amp;n, 10);
    printf(&quot;%lu\n&quot;, n);
    n = 98;
    set_bit(&amp;n, 0);
    printf(&quot;%lu\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/0x14. Binary$ ./d
1056
1024
99
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>

<b>4. 100</b>

<p>Write a function that sets the value of a bit to <code>0</code> at a given index.</p>

<ul>
<li>Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 4-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&amp;n, 10);
    printf(&quot;%lu\n&quot;, n);
    n = 0;
    clear_bit(&amp;n, 10);
    printf(&quot;%lu\n&quot;, n);
    n = 98;
    clear_bit(&amp;n, 1);
    printf(&quot;%lu\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/0x14. Binary$ ./e
0
0
96
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>

<b>5. 101</b>

<p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p>

<ul>
<li>Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 5-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf(&quot;%u\n&quot;, n);
    n = flip_bits(402, 98);
    printf(&quot;%u\n&quot;, n);
    n = flip_bits(1024, 3);
    printf(&quot;%u\n&quot;, n);
    n = flip_bits(1024, 1025);
    printf(&quot;%u\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/0x14. Binary$ ./f
2
5
3
1
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>

<b>6. Endianness</b>

<p>Write a function that checks the endianness.</p>

<ul>
<li>Prototype: <code>int get_endianness(void);</code></li>
<li>Returns: <code>0</code> if big endian, <code>1</code> if little endian</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 100-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf(&quot;Little Endian\n&quot;);
    }
    else
    {
        printf(&quot;Big Endian\n&quot;);
    }
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
julien@ubuntu:~/0x14. Binary$ ./h 
Little Endian
julien@ubuntu:~/0x14. Binary$ lscpu | head
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                1
On-line CPU(s) list:   0
Thread(s) per core:    1
Core(s) per socket:    1
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
julien@ubuntu:~/0x14. Binary$
</code></pre>
<br></br>

<b>7. Crackme3</b>

<p>Find the password for <a href="https://github.com/holbertonschool/0x13.c" title="this program" target="_blank">this program</a>.</p>

<ul>
<li>Save the password in the file <code>101-password</code></li>
<li>Your file should contain the exact password, no new line, no extra space</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ ./crackme3 `cat 101-password`
Congratulations!
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
<br></br>
