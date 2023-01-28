# License Key Formatting
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string <strong>S</strong>&nbsp;that consists of only alphanumeric characters and dashes.<strong>&nbsp;</strong>The string is separated into&nbsp;<strong>N + 1</strong>&nbsp;groups by&nbsp;<strong>N</strong>&nbsp;dashes. Also given an integer&nbsp;<strong>K</strong>.&nbsp;</span></p>

<p><span style="font-size:18px">We want to reformat the string&nbsp;<strong>S</strong>,&nbsp;such that each group contains exactly&nbsp;<strong>K</strong>&nbsp;characters, except for the first group, which could be shorter than&nbsp;<strong>K</strong>&nbsp;but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.</span></p>

<p><span style="font-size:18px">Return the reformatted string.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>S = "5F3Z-2e-9-w", K = 4
<strong>Output: "</strong>5F3Z-2E9W"
<strong>Explanation:&nbsp;</strong>The string <strong>S</strong>&nbsp;has been split into two
parts, each part has 4 characters. Note that two
extra dashes are not needed and can be removed.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "2-5g-3-J", K = 2
<strong>Output: </strong>"2-5G-3J"
<strong>Explanation:&nbsp;</strong>The string s has been split 
into three parts, each part has 2 characters 
except the first part as it could
be shorter as mentioned above.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>ReFormatString()</strong>&nbsp;which takes a string&nbsp;<strong>S</strong><strong>&nbsp;</strong>and an integer <strong>K</strong>&nbsp;as input&nbsp;and returns the reformatted string.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ S.length() ≤ 10<sup>5</sup></span><br>
<span style="font-size:18px">1 ≤ K ≤ 10<sup>4</sup></span></p>
</div>