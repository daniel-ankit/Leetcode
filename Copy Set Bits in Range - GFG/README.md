# Copy Set Bits in Range
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two numbers x and y, and a range [l, r] where 1 &lt;= l, r &lt;= 32. Find the&nbsp;set bits of y in range [l, r] and set these bits in x also. </span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
X = 44, Y = 3 
L = 1,  R = 5
<strong>Output:</strong> 47
<strong>Explaination:</strong> presenation of 44 and 3 are 
101100 and 11. So in the range 1 to 5 there 
are two set bits. If those are set in 44 
it will become 101111 = 47.</span></pre>

<p><br>
<strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
X = 16, Y = 2
L = 1,  R = 3
<strong>Output:</strong> 18
<strong>Explaination:</strong> representation of 16 and 2 
are 10000 and 10. If the mentioned rule is 
followed then 16 will become 10010 = 18.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the dunction <strong>setSetBit()</strong> which takes the number x, y, l and r as input parameters and return the modified value of x.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(r - l)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ x, y ≤ 10<sup>9</sup><br>
1 ≤ l ≤ r ≤ 32</span></p>
</div>