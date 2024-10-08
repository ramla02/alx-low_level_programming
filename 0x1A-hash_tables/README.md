# 0x1A. C - Hash tables

 <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/IQVfdxJlS6jhAgcuUoCseg" title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" target="_blank">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> </li>
<li><a href="/rltoken/ZKpRI_FxOxAz80Onpfy0Ew" title="Hash function" target="_blank">Hash function</a> </li>
<li><a href="/rltoken/mxjKpEfAw3E5B8S3inPuHQ" title="Hash table" target="_blank">Hash table</a> </li>
<li><a href="/rltoken/3RwwAqmpGJpMiBa7BE9fAQ" title="All about hash tables" target="_blank">All about hash tables</a></li>
<li><a href="/rltoken/OgO7uga3PIaCTMtTzYCY3g" title="why hash tables and not arrays" target="_blank">why hash tables and not arrays</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/fLjDjjaCL1oE-WJcDPpmFg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<h3>Data Structures</h3>

<p>Please use these data structures for this project:</p>

<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>

<h3>Tests</h3>

<p>We strongly encourage you to work all together on a set of tests</p>

<h3>Python Dictionaries</h3>

<p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {&#39;a&#39;: 1, &#39;b&#39;: 2}</code>, but everything looks so simple for the user. Python doesn&rsquo;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a href="/rltoken/hKhDFfKKcxdM9U8GZVPOHQ" title="how dictionaries are implemented in Python 2.7" target="_blank">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>

<p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a href="/rltoken/6wE80OFPwL-As1zGh2iMFg" title="Read more here" target="_blank">Read more here</a> (not mandatory).</p>

  </div>
</div>


