# <b>0x12. C - Singly linked lists</b>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/2WOe5XO84Puxd4Y1FUJwVQ" title="Linked Lists" target="_blank">Linked Lists</a> </li>
<li><a href="/rltoken/jiyCC9L1Axkl_nEmuh4j3w" title="Google" target="_blank">Google</a> </li>
<li><a href="/rltoken/DcEVPdONWy2p1x8XPH53Uw" title="Youtube" target="_blank">Youtube</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/3Nj_wUvnBJD6wSUyHGt6qw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
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
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc&#39;ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</code></pre>
</div>
<br></br>

## Tasks
<b>0. Print list</b>

<p>Write a function that prints all the elements of a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t print_list(const list_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>If <code>str</code> is <code>NULL</code>, print <code>[0] (nil)</code></li>
<li>You are allowed to use <code>printf</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {&quot;World&quot;, 5, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf(&quot;Error\n&quot;);
        return (1);
    }
    new-&gt;str = strdup(&quot;Hello&quot;);
    new-&gt;len = 5;
    new-&gt;next = head;
    head = new;
    n = print_list(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);

    printf(&quot;\n&quot;);
    free(new-&gt;str);
    new-&gt;str = NULL;
    n = print_list(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);

    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-&gt; 2 elements

[0] (nil)
[5] World
-&gt; 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>
<br></br>

<b>1. List length</b>

<p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t list_len(const list_t *h);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 1-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {&quot;World&quot;, 5, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf(&quot;Error\n&quot;);
        return (1);
    }
    new-&gt;str = strdup(&quot;Hello&quot;);
    new-&gt;len = 5;
    new-&gt;next = head;
    head = new;
    n = list_len(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);
    free(new-&gt;str);
    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>
<br></br>

<b>2. Add node</b>

<p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>list_t *add_node(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 2-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&amp;head, &quot;Alexandro&quot;);
    add_node(&amp;head, &quot;Asaia&quot;);
    add_node(&amp;head, &quot;Augustin&quot;);
    add_node(&amp;head, &quot;Bennett&quot;);
    add_node(&amp;head, &quot;Bilal&quot;);
    add_node(&amp;head, &quot;Chandler&quot;);
    add_node(&amp;head, &quot;Damian&quot;);
    add_node(&amp;head, &quot;Daniel&quot;);
    add_node(&amp;head, &quot;Dora&quot;);
    add_node(&amp;head, &quot;Electra&quot;);
    add_node(&amp;head, &quot;Gloria&quot;);
    add_node(&amp;head, &quot;Joe&quot;);
    add_node(&amp;head, &quot;John&quot;);
    add_node(&amp;head, &quot;John&quot;);
    add_node(&amp;head, &quot;Josquin&quot;);
    add_node(&amp;head, &quot;Kris&quot;);
    add_node(&amp;head, &quot;Marine&quot;);
    add_node(&amp;head, &quot;Mason&quot;);
    add_node(&amp;head, &quot;Praylin&quot;);
    add_node(&amp;head, &quot;Rick&quot;);
    add_node(&amp;head, &quot;Rick&quot;);
    add_node(&amp;head, &quot;Rona&quot;);
    add_node(&amp;head, &quot;Siphan&quot;);
    add_node(&amp;head, &quot;Sravanthi&quot;);
    add_node(&amp;head, &quot;Steven&quot;);
    add_node(&amp;head, &quot;Tasneem&quot;);
    add_node(&amp;head, &quot;William&quot;);
    add_node(&amp;head, &quot;Zee&quot;);
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

<b>3. Add node at the end</b>

<p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>list_t *add_node(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 2-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&amp;head, &quot;Alexandro&quot;);
    add_node(&amp;head, &quot;Asaia&quot;);
    add_node(&amp;head, &quot;Augustin&quot;);
    add_node(&amp;head, &quot;Bennett&quot;);
    add_node(&amp;head, &quot;Bilal&quot;);
    add_node(&amp;head, &quot;Chandler&quot;);
    add_node(&amp;head, &quot;Damian&quot;);
    add_node(&amp;head, &quot;Daniel&quot;);
    add_node(&amp;head, &quot;Dora&quot;);
    add_node(&amp;head, &quot;Electra&quot;);
    add_node(&amp;head, &quot;Gloria&quot;);
    add_node(&amp;head, &quot;Joe&quot;);
    add_node(&amp;head, &quot;John&quot;);
    add_node(&amp;head, &quot;John&quot;);
    add_node(&amp;head, &quot;Josquin&quot;);
    add_node(&amp;head, &quot;Kris&quot;);
    add_node(&amp;head, &quot;Marine&quot;);
    add_node(&amp;head, &quot;Mason&quot;);
    add_node(&amp;head, &quot;Praylin&quot;);
    add_node(&amp;head, &quot;Rick&quot;);
    add_node(&amp;head, &quot;Rick&quot;);
    add_node(&amp;head, &quot;Rona&quot;);
    add_node(&amp;head, &quot;Siphan&quot;);
    add_node(&amp;head, &quot;Sravanthi&quot;);
    add_node(&amp;head, &quot;Steven&quot;);
    add_node(&amp;head, &quot;Tasneem&quot;);
    add_node(&amp;head, &quot;William&quot;);
    add_node(&amp;head, &quot;Zee&quot;);
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>
<br></br>

<b>4. Free list</b>

<p>Write a function that frees a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>void free_list(list_t *head);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&amp;head, &quot;Bob&quot;);
    add_node_end(&amp;head, &quot;&amp;&quot;);
    add_node_end(&amp;head, &quot;Kris&quot;);
    add_node_end(&amp;head, &quot;love&quot;);
    add_node_end(&amp;head, &quot;asm&quot;);
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/0x12. Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &amp;
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>
<br></br>

<b>5. The Hare and the Tortoise</b>

<p>Write a function that prints <code>You&#39;re beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p>

<ul>
<li>You are allowed to use the <code>printf</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 100-main.c
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf(&quot;(A tortoise, having pretty good sense of a hare&#39;s nature, challenges one to a race.)\n&quot;);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
julien@ubuntu:~/$ ./first 
You&#39;re beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare&#39;s nature, challenges one to a race.)
julien@ubuntu:~/$ 
</code></pre>