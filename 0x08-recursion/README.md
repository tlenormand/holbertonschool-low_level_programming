# <b>0x08. C - Recursion</b>

## Resources
Read or watch:

<li>0x08. Recursion, introduction</i>
<li>What on Earth is Recursion?</i>
<li>C - Recursion</i>
<li>C Programming Tutorial 85, Recursion pt.1</i>
<li>C Programming Tutorial 86, Recursion pt.2</i>
<br></br>

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
<br></br>

## General
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn’t implement recursion</li>
<br></br>

## Requirements
### <i>General</i>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden</li>
<li>You are allowed to use _putchar</li>
<li>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h</li>
<li>Don’t forget to push your header file</li>
<li>You are not allowed to use any kind of loops</li>
<li>You are not allowed to use static variables</li>
<br></br>

## Tasks
<b>0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget</b>

Write a function that prints a string, followed by a new line.

<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion(&quot;Puts with recursion&quot;);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>
<br></br>

<b>1. Why is it so important to dream? Because, in my dreams we are together</b>

Write a function that prints a string in reverse.

<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion(&quot;\nColton Walker&quot;);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>
<br></br>

<b>2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange</b>

Write a function that returns the length of a string.

<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion(&quot;Corbin Coleman&quot;);
    printf(&quot;%d\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>
<br></br>

<b>3. You mustn't be afraid to dream a little bigger, darling</b>

Write a function that returns the factorial of a given number.

<ul>
<li>Prototype: <code>int factorial(int n);</code><br></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br></li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf(&quot;%d\n&quot;, r);
    r = factorial(5);
    printf(&quot;%d\n&quot;, r);
    r = factorial(10);
    printf(&quot;%d\n&quot;, r);
    r = factorial(-1024);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
</code></pre>
<br></br>

<b>4. Once an idea has taken hold of the brain it's almost impossible to eradicate</b>

Write a function that returns the value of x raised to the power of y.

<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code><br></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(1024, 0);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(2, 16);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(5, 2);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(5, -2);
    printf(&quot;%d\n&quot;, r);
    r = _pow_recursion(-5, 3);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$
</code></pre>
<br></br>

<b>5. Your subconscious is looking for the dreamer</b>

Write a function that returns the natural square root of a number.

<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code><br></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(1024);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(16);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(17);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(25);
    printf(&quot;%d\n&quot;, r);
    r = _sqrt_recursion(-1);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>
<br></br>

<b>6. Inception. Is it possible?</b>

Write a function that returns <code>1</code> if the input integer is a prime number, otherwise return <code>0</code>.

<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(1024);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(16);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(17);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(25);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(-1);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(113);
    printf(&quot;%d\n&quot;, r);
    r = is_prime_number(7919);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x08. Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>
<br></br>

<b>7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything</b>

Write a function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.

<ul>
<li>Prototype: <code>int is_palindrome(char *s);</code><br></li>
<li>An empty string is a palindrome</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 100-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome(&quot;level&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;redder&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;test&quot;);
    printf(&quot;%d\n&quot;, r);
    r = is_palindrome(&quot;step on no pets&quot;);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
julien@ubuntu:~/0x08. Recursion$ ./100-palindrome 
1
1
0
1
julien@ubuntu:~/0x08. Recursion$
</code></pre>
<br></br>

<b>8. Inception. Now, before you bother telling me it's impossible...</b>

Write a function that compares two strings and returns <code>1</code> if the strings can be considered identical, otherwise return <code>0</code>.

<ul>
<li>Prototype: <code>int wildcmp(char *s1, char *s2);</code></li>
<li><code>s2</code> can contain the special character <code>*</code>.</li>
<li>The special char <code>*</code> can replace any string (including an empty string)</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 101-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp(&quot;main.c&quot;, &quot;*.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m*a*i*n*.*c*&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;main.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;ma********************************c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;*&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;***&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;m.*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main.c&quot;, &quot;**.*c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main-main.c&quot;, &quot;ma*in.c&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;main&quot;, &quot;main*d&quot;);
    printf(&quot;%d\n&quot;, r);
    r = wildcmp(&quot;abc&quot;, &quot;*b&quot;);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/0x08. Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>