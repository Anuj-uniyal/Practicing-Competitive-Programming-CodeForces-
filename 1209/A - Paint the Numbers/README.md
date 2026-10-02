<h2><a href="https://codeforces.com/contest/1209/problem/A" target="_blank" rel="noopener noreferrer">1209A — Paint the Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1209A](https://codeforces.com/contest/1209/problem/A) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Paint the Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a sequence of integers $$$a_1, a_2, \dots, a_n$$$. You need to paint elements in colors, so that: </p><ul> <li> If we consider any color, all elements of this color must be divisible by the minimal element of this color. </li><li> The number of used colors must be minimized. </li></ul><p>For example, it's fine to paint elements $$$[40, 10, 60]$$$ in a single color, because they are all divisible by $$$10$$$. You can use any color an arbitrary amount of times (in particular, it is allowed to use a color only once). The elements painted in one color do not need to be consecutive.</p><p>For example, if $$$a=[6, 2, 3, 4, 12]$$$ then two colors are required: let's paint $$$6$$$, $$$3$$$ and $$$12$$$ in the first color ($$$6$$$, $$$3$$$ and $$$12$$$ are divisible by $$$3$$$) and paint $$$2$$$ and $$$4$$$ in the second color ($$$2$$$ and $$$4$$$ are divisible by $$$2$$$). For example, if $$$a=[10, 7, 15]$$$ then $$$3$$$ colors are required (we can simply paint each element in an unique color).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$1 \le n \le 100$$$), where $$$n$$$ is the length of the given sequence.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 100$$$). These numbers can contain duplicates.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the minimal number of colors to paint all the given numbers in a valid way.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022339595410109192" id="id004372477278401312" class="input-output-copier">Copy</div></div><pre id="id0022339595410109192">6
10 2 3 5 4 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002505991602987454" id="id00525839217265336" class="input-output-copier">Copy</div></div><pre id="id002505991602987454">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014562433531012609" id="id00680111955112872" class="input-output-copier">Copy</div></div><pre id="id0014562433531012609">4
100 100 100 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009459169824868817" id="id008044681369516562" class="input-output-copier">Copy</div></div><pre id="id009459169824868817">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006095655800523614" id="id006437049798896557" class="input-output-copier">Copy</div></div><pre id="id006095655800523614">8
7 6 5 4 3 2 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007705259226466458" id="id0037119355561242084" class="input-output-copier">Copy</div></div><pre id="id007705259226466458">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, one possible way to paint the elements in $$$3$$$ colors is:</p><ul> <li> paint in the first color the elements: $$$a_1=10$$$ and $$$a_4=5$$$, </li><li> paint in the second color the element $$$a_3=3$$$, </li><li> paint in the third color the elements: $$$a_2=2$$$, $$$a_5=4$$$ and $$$a_6=2$$$. </li></ul><p>In the second example, you can use one color to paint all the elements.</p><p>In the third example, one possible way to paint the elements in $$$4$$$ colors is:</p><ul> <li> paint in the first color the elements: $$$a_4=4$$$, $$$a_6=2$$$ and $$$a_7=2$$$, </li><li> paint in the second color the elements: $$$a_2=6$$$, $$$a_5=3$$$ and $$$a_8=3$$$, </li><li> paint in the third color the element $$$a_3=5$$$, </li><li> paint in the fourth color the element $$$a_1=7$$$. </li></ul></div>