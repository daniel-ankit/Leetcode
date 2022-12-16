# Find number of closed islands
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a <a href="https://www.geeksforgeeks.org/program-to-check-if-a-matrix-is-binary-matrix-or-not/">binary matrix</a> <strong>mat[][]</strong> of dimensions <strong>NxM</strong> such that 1 denotes land and <strong>0</strong> denotes water. Find the number of closed islands in the given matrix. </span></p>

<pre><span style="font-size:18px">A closed island is known as the group of <strong>1s</strong>
that is surrounded by only <strong>0s</strong> on all the four
sides (excluding diagonals). If any 1 is at
the edges of the given matrix then it is not
considered as the part of the connected
island as it is not surrounded by all <strong>0's</strong>.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N = 5, M = 8
mat[][] =</span> <span style="font-size:18px">{{0, 0, 0, 0, 0, 0, 0, 1},&nbsp;
           {0, 1, 1, 1, 1, 0, 0, 1},&nbsp;
           {0, 1, 0, 1, 0, 0, 0, 1},&nbsp;
           {0, 1, 1, 1, 1, 0, 1, 0},&nbsp;
           {0, 0, 0, 0, 0, 0, 0, 1}}</span>
<span style="font-size:18px"><strong>Output:</strong>
2
<strong>Explanation</strong>:
</span><span style="font-size:18px">mat[][] =&nbsp;{{0, 0, 0, 0, 0, 0, 0, 1},&nbsp;
           {0, <strong>1, 1, 1, 1, </strong>0, 0, 1},&nbsp;
           {0, <strong>1</strong>, 0, <strong>1</strong>, 0, 0, 0, 1},&nbsp;
           {0, <strong>1, 1, 1, 1, </strong>0, <strong>1</strong>, 0},&nbsp;
           {0, 0, 0, 0, 0, 0, 0, 1}}&nbsp;
There are 2 closed islands.&nbsp;
The islands in dark are closed because
they are completely surrounded by&nbsp;0s (water).&nbsp;
There are two more islands in the last
column of the matrix, but they are not
completely surrounded by 0s.&nbsp;
Hence they are not closed islands. </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N = 3, M = 3
mat[][] = {{1, 0, 0},
           {0, 1, 0},
           {0, 0, 1}}</span>
<span style="font-size:18px"><strong>Output:</strong>
1</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your task:</strong></span><br>
<span style="font-size:18px">You dont need to read input or print anything. Your task is to complete the function <strong>closedIslands()</strong>&nbsp;which takes two integers N and M, and a 2D binary matrix mat as input parameters and returns the number of closed islands.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N*M)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N*M)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N,M ≤ 500</span></p>
</div>