# Fill the Matrix
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix with dimensions <strong>N</strong> x <strong>M</strong>, entirely filled with zeroes except for&nbsp;one position at&nbsp;co-ordinates <strong>X</strong> and <strong>Y </strong>containing '1'. Find the minimum number of iterations in which the whole matrix can be filled with ones.<br><strong>Note:&nbsp;</strong>In one iteration, '1' can be filled in&nbsp;the 4 neighbouring elements of a cell containing '1'.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
N = 2, M = 3
X = 2, Y = 3
<strong>Output:</strong>&nbsp;3&nbsp;
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/713972/Web/Other/26f91e33-013f-40f2-badd-00804adaf31f_1685087947.png"><span style="font-size: 18px;">
<strong>Explanation</strong>: 3 is the minimum possible 
number of iterations in which the
matrix can be filled.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 1, M = 1
X = 1, Y = 1 
<strong>Output:&nbsp;</strong>0
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/713972/Web/Other/7f59ca2a-c242-49bc-b94e-ba0f3e95f43e_1685087947.png"><span style="font-size: 18px;">
<strong>Explanation</strong>: The whole matrix is 
already filled with ones.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>minIterations()</strong>&nbsp;which takes the dimensions of the matrix N and M and the co-ordinates of the initial position of '1' ie X and Y<strong>&nbsp;</strong>as input parameters&nbsp;and returns the minimum number of iterations required to fill the matrix.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N*M)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤&nbsp;N, M ≤&nbsp;10<sup>3</sup><br>1<sup>&nbsp;</sup>≤&nbsp;X ≤ N<br>1 ≤&nbsp;Y ≤&nbsp;M&nbsp;</span></p></div>