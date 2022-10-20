# Min Manipulations to make Strings Anagram
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings in lowercase, your task is to find minimum number of manipulations required to make two strings anagram<strong> without deleting any character</strong>.&nbsp;If two strings contains same data set in any order then strings are called&nbsp;<strong>Anagrams</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S1 = "aba", S2 = "baa", N = 3
<strong>Output:</strong> 0
<strong>Explanation</strong>: Both the strings are already
anagrams.</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S1 = "ddcf", S2 = "cedk", N = 4
<strong>Output:</strong> 2
<strong>Explanation</strong>: We can change 'e' and 'k' in
S2 to 'd' and 'f' to make both the strings
anagram. </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minManipulation()&nbsp;</strong>which takes the strings&nbsp;S1 and S2 and their length N as inputs and returns the minimum number of manipulations required to make both the strings anagram.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>5</sup></span></p>

<p><span style="font-size:18px">|S1| = |S2| = N</span></p>

<p><span style="font-size:18px">|S| represents the length of the string S.</span></p>
</div>