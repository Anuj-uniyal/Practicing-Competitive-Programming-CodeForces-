<h2><a href="https://codeforces.com/contest/1251/problem/C" target="_blank" rel="noopener noreferrer">1251C — Minimize The Integer</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1251C](https://codeforces.com/contest/1251/problem/C) |

## Topics
`greedy` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Minimize The Integer</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a huge integer $$$a$$$ consisting of $$$n$$$ digits ($$$n$$$ is between $$$1$$$ and $$$3 \cdot 10^5$$$, inclusive). It may contain leading zeros.</p><p>You can swap two digits on adjacent (neighboring) positions if the swapping digits are of different parity (that is, they have different remainders when divided by $$$2$$$). </p><p>For example, if $$$a = 032867235$$$ you can get the following integers in a single operation: </p><ul> <li> $$$302867235$$$ if you swap the first and the second digits; </li><li> $$$023867235$$$ if you swap the second and the third digits; </li><li> $$$032876235$$$ if you swap the fifth and the sixth digits; </li><li> $$$032862735$$$ if you swap the sixth and the seventh digits; </li><li> $$$032867325$$$ if you swap the seventh and the eighth digits. </li></ul><p>Note, that you can't swap digits on positions $$$2$$$ and $$$4$$$ because the positions are not adjacent. Also, you can't swap digits on positions $$$3$$$ and $$$4$$$ because the digits have the same parity.</p><p>You can perform any number (possibly, zero) of such operations.</p><p>Find the minimum integer you can obtain.</p><p><span class="tex-font-style-bf">Note that the resulting integer also may contain leading zeros.</span></p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the input.</p><p>The only line of each test case contains the integer $$$a$$$, its length $$$n$$$ is between $$$1$$$ and $$$3 \cdot 10^5$$$, inclusive.</p><p>It is guaranteed that the sum of all values $$$n$$$ does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print line — the minimum integer you can obtain.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00833293705052044" id="id0007532458841740508" class="input-output-copier">Copy</div></div><pre id="id00833293705052044">3
0709
1337
246432
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009775750584782502" id="id004591918580087073" class="input-output-copier">Copy</div></div><pre id="id009775750584782502">0079
1337
234642
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can perform the following sequence of operations (the pair of swapped digits is highlighted): $$$0 \underline{\textbf{70}} 9 \rightarrow 0079$$$.</p><p>In the second test case, the initial integer is optimal. </p><p>In the third test case you can perform the following sequence of operations: $$$246 \underline{\textbf{43}} 2 \rightarrow 24 \underline{\textbf{63}}42 \rightarrow 2 \underline{\textbf{43}} 642 \rightarrow 234642$$$.</p></div>