# Letters Collection
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">The Postmaster wants&nbsp;to write a program to answer the queries regarding letter collection in a city. A city is represented as a matrix <strong>mat</strong> of size<strong> n*m.</strong> Each cell represents a house and contains letters which are denoted by a number in the&nbsp;cell. The program should answer&nbsp;<strong>q </strong>queries which are of following types:<br>
<strong>1 i j&nbsp;</strong>: To sum all the letters which are at a 1-hop distance from the cell (i,j) in any direction<br>
<strong>2 i j :&nbsp;</strong>To sum all the letters which are at a 2-hop distance from the cell (i,j) in any direction&nbsp;<br>
The queries are given in a 2D matrix&nbsp;<strong>queries[][]</strong>.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
n = 4, m = 4
mat = {{1, 2, 3, 4}, 
&nbsp;      {5, 6, 7, 8}, 
&nbsp;      {9, 1, 3, 4}, 
&nbsp;      {1, 2, 3, 4}}
q = 2
queries = {{1 0 1}, 
&nbsp;          {2 0 1}}
<strong>Output:</strong> 22 29
<strong>Explaination:</strong> 
For the first query sum is 1+5+6+7+3 = 22. 
For the second query sum is 9+1+3+4+8+4 = 29.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to&nbsp;read input or print anything. Your task is to complete the function <strong>matrixSum()</strong> which takes n, m, mat, q and queries as input parameters and returns a list of integers where the ith value is the answers for ith query.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(q)<br>
<strong>Expected Auxiliary Space:</strong> O(q)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m ≤ 20<br>
1 ≤ q ≤ 100&nbsp;</span></p>
</div>