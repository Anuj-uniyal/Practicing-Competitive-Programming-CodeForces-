<h2><a href="https://codeforces.com/contest/1370/problem/C" target="_blank" rel="noopener noreferrer">1370C — Number Game</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1370C](https://codeforces.com/contest/1370/problem/C) |

## Topics
`games` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Number Game</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ashishgup and FastestFinger play a game. </p><p>They start with a number $$$n$$$ and play in turns. In each turn, a player can make <span class="tex-font-style-bf">any one</span> of the following moves:</p><ul> <li> Divide $$$n$$$ by any of its odd divisors greater than $$$1$$$. </li><li> Subtract $$$1$$$ from $$$n$$$ if $$$n$$$ is greater than $$$1$$$. </li></ul><p>Divisors of a number include the number itself.</p><p>The player who is <span class="tex-font-style-bf">unable to make a move</span> loses the game.</p><p>Ashishgup moves first. Determine the winner of the game if both of them play optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains a single integer  — $$$n$$$ ($$$1 \leq n \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">Ashishgup</span>" if he wins, and "<span class="tex-font-style-tt">FastestFinger</span>" otherwise (without quotes).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009115525780982026" id="id000973171321500177" class="input-output-copier">Copy</div></div><pre id="id0009115525780982026">7
1
2
3
4
5
6
12
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004762122225676808" id="id0018348797485610824" class="input-output-copier">Copy</div></div><pre id="id004762122225676808">FastestFinger
Ashishgup
Ashishgup
FastestFinger
Ashishgup
FastestFinger
Ashishgup
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$n = 1$$$, Ashishgup cannot make a move. He loses.</p><p>In the second test case, $$$n = 2$$$, Ashishgup subtracts $$$1$$$ on the first move. Now $$$n = 1$$$, FastestFinger cannot make a move, so he loses.</p><p>In the third test case, $$$n = 3$$$, Ashishgup divides by $$$3$$$ on the first move. Now $$$n = 1$$$, FastestFinger cannot make a move, so he loses.</p><p>In the last test case, $$$n = 12$$$, Ashishgup divides it by $$$3$$$. Now $$$n = 4$$$, FastestFinger is forced to subtract $$$1$$$, and Ashishgup gets $$$3$$$, so he wins by dividing it by $$$3$$$.</p></div>