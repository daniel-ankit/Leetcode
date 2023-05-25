# Maximum Tip Calculator
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Rahul and Ankit are the only two waiters in the Royal Restaurant. Today, the restaurant received <strong>n</strong> orders. The amount of tips may differ when handled by different waiters, if Rahul takes the <strong>i</strong><sub>th</sub> order, he would be tipped <strong>a<sub>i</sub></strong> rupees and if Ankit takes this order, the tip would be <strong>b<sub>i</sub></strong> rupees.<br>
In order to maximize the total tip value they decided to distribute the order among themselves. One order will be handled by one person only. Also, due to time constraints Rahul cannot take more than <strong>x</strong> orders and Ankit cannot take more than <strong>y</strong> orders. It is guaranteed that <strong>x + y</strong> is greater than or equal to <strong>n,</strong>&nbsp;which means that all the orders can be handled by either Rahul or Ankit. Find out the maximum possible amount of total tip money after processing all the orders.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5, x = 3, y = 3
a[] = {1, 2, 3, 4, 5}
b[] = {5, 4, 3, 2, 1}
<strong>Output:</strong> 21
<strong>Explanation:</strong> Rahul will serve 3rd, 4th 
and 5th order while Ankit will serve 
the rest.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 8, x = 4, y = 4
a[] = {1, 4, 3, 2, 7, 5, 9, 6}
b[] = {1, 2, 3, 6, 5, 4, 9, 8}
<strong>Output:</strong> 43
<strong>Explanation:</strong> Rahul will serve 1st, 2nd, 5th 
and 6th order while Ankit will serve the rest.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxTip()</strong>&nbsp;which takes <strong>array</strong>&nbsp;<strong>a[ ], array b[ ], n, x</strong>&nbsp;and&nbsp;<strong>y&nbsp;</strong>as input parameters and returns an integer&nbsp;denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n*logn)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(n)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n&nbsp;≤ 10<sup>5</sup><br>
1 ≤ x, y&nbsp;≤ N<br>
x + y&nbsp;≥ n<br>
1 ≤ a[i], b[i] ≤ 10<sup>5</sup></span></p>
</div>