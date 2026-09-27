<h2><a href="https://codeforces.com/contest/1368/problem/B" target="_blank" rel="noopener noreferrer">1368B — Codeforces Subsequences</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1368B](https://codeforces.com/contest/1368/problem/B) |

## Topics
`brute force` `constructive algorithms` `greedy` `math` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Codeforces Subsequences</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Karl likes Codeforces and subsequences. He wants to find a string of lowercase English letters that contains at least $$$k$$$ subsequences <span class="tex-font-style-tt">codeforces</span>. Out of all possible strings, Karl wants to find a shortest one.</p><p>Formally, a <span class="tex-font-style-tt">codeforces</span> subsequence of a string $$$s$$$ is a subset of ten characters of $$$s$$$ that read <span class="tex-font-style-tt">codeforces</span> from left to right. For example, <span class="tex-font-style-tt">codeforces</span> contains <span class="tex-font-style-tt">codeforces</span> a single time, while <span class="tex-font-style-tt">codeforcesisawesome</span> contains <span class="tex-font-style-tt">codeforces</span> four times: <span class="tex-font-style-tt"><span class="tex-font-style-bf">codeforces</span>isawesome</span>, <span class="tex-font-style-tt"><span class="tex-font-style-bf">codeforce</span>si<span class="tex-font-style-bf">s</span>awesome</span>, <span class="tex-font-style-tt"><span class="tex-font-style-bf">codeforce</span>sisawe<span class="tex-font-style-bf">s</span>ome</span>, <span class="tex-font-style-tt"><span class="tex-font-style-bf">codeforc</span>esisaw<span class="tex-font-style-bf">es</span>ome</span>.</p><p>Help Karl find any shortest string that contains at least $$$k$$$ <span class="tex-font-style-tt">codeforces</span> subsequences.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains a single integer $$$k$$$ ($$$1 \leq k \leq 10^{16})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a shortest string of lowercase English letters that contains at least $$$k$$$ <span class="tex-font-style-tt">codeforces</span> subsequences. If there are several such strings, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003410364991368209" id="id0024915640881843504" class="input-output-copier">Copy</div></div><pre id="id003410364991368209">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003973236752543502" id="id009693735254829409" class="input-output-copier">Copy</div></div><pre id="id003973236752543502">codeforces
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013719796239502802" id="id006188949730426281" class="input-output-copier">Copy</div></div><pre id="id0013719796239502802">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007896713059752304" id="id00504995466805761" class="input-output-copier">Copy</div></div><pre id="id007896713059752304">codeforcesss</pre></div></div></div>