# Minimize connections
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer&nbsp;<strong>N</strong>, denoting the number of computers connected by cables forming a network and a 2d array&nbsp;<strong>connections[][]</strong>, with each row<strong>&nbsp;(i, j)</strong>&nbsp;representing a connection between<strong>&nbsp;i<sup>th</sup></strong>&nbsp;and&nbsp;<strong>j<sup>th</sup>&nbsp;</strong>computer, the task is to connect all the computers either directly or indirectly by removing any of the given connections and connecting two disconnected computers.&nbsp;<br>
If its not possible to connect all the computers, print&nbsp;<strong>-1</strong>.&nbsp;<br>
Otherwise, print the minimum number of such operations required.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4 
connections[][] = {{0, 1}, {0, 2}, {1, 2}}
<strong>Output:</strong>
1
<strong>Explanation:</strong> 
Remove the connection between computers 1 and 2 and connect computers 1 and 3.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
connections[][] = {{0, 1}, {0, 2}, {3, 4}, {2, 3}}
<strong>Output:</strong>
0
<strong>Explanation:</strong>
No removal of connections is required.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>minimizeConnections()</strong>&nbsp;which takes the array connections[], number of computers N<strong>&nbsp;</strong>as input parameters and returns the minimum number of operations required to connect all computers with each other. If it&nbsp;is not possible to do so then&nbsp;return&nbsp;<strong>-1</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>3</sup><br>
0&lt;=connections[i][0],connections[i][1]</span></p>

<p><span style="font-size:18px">&nbsp;</span></p>
</div>