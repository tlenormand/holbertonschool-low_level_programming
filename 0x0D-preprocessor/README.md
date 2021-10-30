# <b>0x0D. C - Preprocessor</b>

  <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/UlmUG7PSamY2_qL6xze6wg" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
<li><a href="/rltoken/KAqnlwAvPZ84KI2JFlJpSg" title="Object-like Macros" target="_blank">Object-like Macros</a> </li>
<li><a href="/rltoken/cJyU0mmGRx_Wd9x8WwygOQ" title="Macro Arguments" target="_blank">Macro Arguments</a> </li>
<li><a href="/rltoken/A5176irunoejPUjwT3pFCQ" title="Pre Processor Directives in C" target="_blank">Pre Processor Directives in C</a> </li>
<li><a href="/rltoken/lgohqkU5DlzUBkO2MeMmHA" title="The C Preprocessor" target="_blank">The C Preprocessor</a> </li>
<li><a href="/rltoken/C47iIZ3tGug6sklTB7hT_Q" title="Standard Predefined Macros" target="_blank">Standard Predefined Macros</a> </li>
<li><a href="/rltoken/sqLUMtBCgAAXVdhIaVoaWQ" title="include guard" target="_blank">include guard</a> </li>
<li><a href="/rltoken/fJJUPJ-zZXlh3db00FEsJw" title="Common Predefined Macros" target="_blank">Common Predefined Macros</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/mn8Yoq1uLMNqJfqX1eFYkw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are macros and how to use them</li>
<li>What are the most common predefined macros</li>
<li>How to include guard your header files</li>
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
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<br></br>

## Tasks
<b>0. Object-like Macro</b>

    <p>Create a header file that defines a macro named <code>SIZE</code> as an abbreviation for the token <code>1024</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include &quot;0-object_like_macro.h&quot;
#include &quot;0-object_like_macro.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf(&quot;%d\n&quot;, s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>
<br></br>

<b>1. Pi</b>

    <p>Create a header file that defines a macro named <code>SIZE</code> as an abbreviation for the token <code>1024</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include &quot;0-object_like_macro.h&quot;
#include &quot;0-object_like_macro.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf(&quot;%d\n&quot;, s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>
<br></br>

<b>2. File name</b>

    <p>Write a program that prints the name of the file it was compiled from, followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
</ul>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>
<br></br>

<b>3. Function-like macro</b>

    <p>Write a function-like macro <code>ABS(x)</code> that computes the absolute value of a number <code>x</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include &lt;stdio.h&gt;
#include &quot;3-function_like_macro.h&quot;
#include &quot;3-function_like_macro.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf(&quot;%d, %d\n&quot;, i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>
<br></br>

<b>4. SUM</b>

    <p>Write a function-like macro <code>SUM(x, y)</code> that computes the sum of the numbers <code>x</code> and <code>y</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include &lt;stdio.h&gt;
#include &quot;4-sum.h&quot;
#include &quot;4-sum.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf(&quot;%d\n&quot;, s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>
<br></br>

<b>5. Worst abuse of the C preprocessor (IOCCC winner, 1986)</b>

    <p>Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.</p>

<ul>
<li>Write a blog post to explain what this program does, how it works, and &ldquo;de-obfuscate&rdquo; it step by step for the reader</li>
<li>You blog post should have at least one picture, at the top of the blog post</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on LinkedIn</li>
</ul>

<p>Once done, please add all urls below (blog post, LinkedIn post, etc.)</p>

<p>Please, remember that these blogs must be written in English to further your technical ability in a variety of settings
<strong>It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.</strong></p>

<pre><code>julien@ubuntu:~/c/ioccc$ cat hague.c 
#define DIT (
#define DAH )
#define __DAH   ++
#define DITDAH  *
#define DAHDIT  for
#define DIT_DAH malloc
#define DAH_DIT gets
#define _DAHDIT char
_DAHDIT _DAH_[]=&quot;ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e&#39;b.s;i,d:&quot;
;main           DIT         DAH{_DAHDIT
DITDAH          _DIT,DITDAH     DAH_,DITDAH DIT_,
DITDAH          _DIT_,DITDAH        DIT_DAH DIT
DAH,DITDAH      DAH_DIT DIT     DAH;DAHDIT
DIT _DIT=DIT_DAH    DIT 81          DAH,DIT_=_DIT
__DAH;_DIT==DAH_DIT DIT _DIT        DAH;__DIT
DIT&#39;\n&#39;DAH DAH      DAHDIT DIT      DAH_=_DIT;DITDAH
DAH_;__DIT      DIT         DITDAH
_DIT_?_DAH DIT      DITDAH          DIT_ DAH:&#39;?&#39;DAH,__DIT
DIT&#39; &#39;DAH,DAH_ __DAH    DAH DAHDIT      DIT
DITDAH          DIT_=2,_DIT_=_DAH_; DITDAH _DIT_&amp;&amp;DIT
DITDAH _DIT_!=DIT   DITDAH DAH_&gt;=&#39;a&#39;?   DITDAH
DAH_&amp;223:DITDAH     DAH_ DAH DAH;       DIT
DITDAH          DIT_ DAH __DAH,_DIT_    __DAH DAH
DITDAH DIT_+=       DIT DITDAH _DIT_&gt;=&#39;a&#39;?  DITDAH _DIT_-&#39;a&#39;:0
DAH;}_DAH DIT DIT_  DAH{            __DIT DIT
DIT_&gt;3?_DAH     DIT          DIT_&gt;&gt;1 DAH:&#39;\0&#39;DAH;return
DIT_&amp;1?&#39;-&#39;:&#39;.&#39;;}__DIT DIT           DIT_ DAH _DAHDIT
DIT_;{DIT void DAH write DIT            1,&amp;DIT_,1 DAH;}
julien@ubuntu:~/c/ioccc$ gcc -std=gnu89 hague.c -o h
hague.c: In function ‘main’:                                                                                                                                                                                
hague.c:6:17: warning: conflicting types for built-in function ‘malloc’; expected ‘void *(long unsigned int)’ [-Wbuiltin-declaration-mismatch]                                                              
    6 | #define DIT_DAH malloc                                                                                                                                                                              
      |                 ^~~~~~                                                                                                                                                                              
hague.c:12:40: note: in expansion of macro ‘DIT_DAH’                                                                                                                                                        
   12 |    DITDAH          _DIT_,DITDAH        DIT_DAH DIT                                                                                                                                                  
      |                                        ^~~~~~~                                                                                                                                                      
hague.c:1:1: note: ‘malloc’ is declared in header ‘&lt;stdlib.h&gt;’                                                                                                                                              
  +++ |+#include &lt;stdlib.h&gt;                                                                                                                                                                                 
    1 | #define DIT (                                                                                                                                                                                       
/usr/bin/ld: /tmp/cczAyJcz.o: in function `main&#39;:                                                                                                                                                           
hague.c:(.text+0x151): warning: the `gets&#39; function is dangerous and should not be used.    
julien@ubuntu:~/c/ioccc$ ./h 
Hello, World                                                                                                                                                                                                
.... . .-.. .-.. --- --..-- ? .-- --- .-. .-.. -..     
julien@ubuntu:~/c/ioccc$ 
</code></pre>
<br></br>
