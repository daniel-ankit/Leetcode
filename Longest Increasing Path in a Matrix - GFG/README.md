# Longest Increasing Path in a Matrix
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix with <strong>n</strong> rows and <strong>m </strong>columns. Your task is to find the length of the longest increasing path in matrix, here increasing path means that the value in the specified path increases. For example if a path of length k has values a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, .... a<sub>k </sub>&nbsp;, then for every i from [2,k] this condition must hold a<sub>i&nbsp;</sub>&gt; a<sub>i-1</sub>.&nbsp; No cell should be revisited in the path.<br>
From each cell, you can either move in four directions: left, right, up, or down. You are not allowed to move&nbsp;diagonally&nbsp;or move&nbsp;outside the boundary.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1</strong><strong>:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3, m = 3
matrix[][] = {{1 2 3},
&nbsp;             {4 5 6},
&nbsp;             {7 8 9}}
<strong>Output: 
</strong>5<strong>
Explanation: 
</strong>The longest increasing path is 
{1, 2, 3, 6, 9}. </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2</strong><strong>:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3, m = 3
matrix[][] = {{3 4 5},
&nbsp;             {6 2 6},
&nbsp;             {2 2 1}}
<strong>Output: 
</strong>4<strong>
Explanation:
</strong>The longest increasing path is
{3, 4, 5, 6}.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You only need to implement the given function&nbsp;<strong>longestIncreasingPath() </strong>which takes the two integers <strong>n&nbsp;</strong>and <strong>m&nbsp;</strong>and the matrix <strong>matrix </strong>as input parameters, and&nbsp;returns the length of the longest increasing path in matrix.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n*m)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(n*m)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;</span><span style="font-size:18px">n,m ≤ 1</span><span style="font-size:18px">000<br>
0 ≤&nbsp;</span><span style="font-size:18px">matrix[i] ≤&nbsp;</span><span style="font-size:18px">2<sup>30</sup></span></p>
</div>