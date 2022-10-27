# Lucas Number
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A Lucas Number is a number which is represented by the following recurrence<br>
L<sub>n</sub>&nbsp;= L<sub>n-1</sub>&nbsp;+ L<sub>n-2</sub>&nbsp;for<strong> n&gt;1</strong><br>
L<sub>0</sub>&nbsp;= 2<br>
L<sub>1</sub>&nbsp;= 1</span></p>

<p><span style="font-size:18px">Given a number <strong>N,</strong>&nbsp;find the N<strong><sup>th</sup></strong> lucas number.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong>&nbsp;Since the output may be very large calculate the answer&nbsp;<strong>modulus 10^9+7.</strong></span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
<strong>Output:</strong> 11
<strong>Explanation</strong>: L<sub>3</sub> + L<sub>4</sub> = L<sub>5
</sub>L<sub>3 </sub>= 4 and L<sub>4</sub> = 7
</span></pre>

<p><br>
<span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 7
<strong>Output:</strong> 29
<strong>Explanation</strong>: L<sub>5</sub></span><span style="font-size:18px">&nbsp;+ L<sub>6</sub></span><span style="font-size:18px">&nbsp;= L<sub>7</sub></span>
<span style="font-size:18px">L<sub>5</sub></span><sub> </sub><span style="font-size:18px">= 11 and L<sub>6</sub></span><span style="font-size:18px">&nbsp;= 18
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>lucas()&nbsp;</strong>which takes&nbsp;integer N &nbsp;as input parameter and return N<sup>th</sup></span>&nbsp; <span style="font-size:18px">L</span><span style="font-size:18px">ucas number.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>6</sup></span></p>
</div>