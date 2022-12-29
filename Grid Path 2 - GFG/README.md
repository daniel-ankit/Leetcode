# Grid Path 2
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a grid of m * n having 0 and 1 respectively,&nbsp;0 denotes space, and 1 denotes obstacle. Geek is located at top-left corner (i.e grid[0][0])&nbsp;and wants to reach the bottom right corner&nbsp;of the grid. A geek can move either<strong> down</strong> or <strong>right</strong> at any point of time. return the total number of ways in which Geek can reach bottom right corner.&nbsp;answer may be large take the modulo by 1e9+7.</span></p>

<pre><span style="font-size:18px"><strong>Example:</strong>
<strong>Input:
</strong>m = 3, n = 3
grid= [[0,0,0],[0,1,0],[0,0,0]]
<strong>Output:</strong>
2
<strong>Explanation:</strong>
There is one obstacle in the middle of the 3x3 grid above. There are two ways to reach
the bottom-right corner:
1. Right -&gt; Right -&gt; Down -&gt; Down
2. Down -&gt; Down -&gt; Right -&gt; Right</span>

<strong><span style="font-size:18px">Example 2:
Input:
</span></strong><span style="font-size:18px">m = 2, n = 2
grid = [[0,1],[0,0]]
<strong>Output:</strong>
1</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't have to read input or print anything. Your task is to complete the function <strong>totalWays()&nbsp;</strong>which takes the integer n and m and m * n grid.</span></p>

<p><span style="font-size:18px"><strong>Constraint:</strong><br>
1 &lt;= m,n &lt;= 100<br>
grid[i][j] is 0 or 1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(m * n)<br>
<strong>Expected Space Complexity:</strong> O(n)</span></p>
</div>