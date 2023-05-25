# Count all possible paths from top left to bottom right
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">The task&nbsp;is to count all the possible paths from top left to bottom right of a <strong>m&nbsp;</strong>X&nbsp;<strong>n</strong> matrix with the constraints that&nbsp;from each cell you can either move only to right or down.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: m = 2, n = 2
<strong>Output:</strong>&nbsp;2&nbsp;
<strong>Explanation</strong>: Two possible ways are
RD and DR.  </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>m = 3, n = 3
<strong>Output:&nbsp;</strong>6
<strong>Explanation</strong>: Six possible ways are
RRDD, DDRR, RDDR, DRRD, RDRD, DRDR. </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>numberOfPaths()&nbsp;</strong>which takes m&nbsp;and n&nbsp;as input parameter and returns count all the possible paths.The answer may be very large, compute the answer modulo 10<sup>9</sup>&nbsp;+ 7.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(m*n)<br>
<strong>Expected Auxiliary Space:</strong> O(m*n)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= m&nbsp;&lt;=100<br>
1 &lt;= n&nbsp;&lt;=100</span></p>
</div>