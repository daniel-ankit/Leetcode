# Ruling Pair
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek Land has a population of N people and each person's ability to rule the town is measured by a numeric value arr[i]. The two people that can together rule Geek Land must be compatible with each other i.e.,&nbsp;the sum of digits of their ability arr[i]&nbsp;must be equal. Their combined ability should be maximum amongst all the possible pairs of people.&nbsp;Find the combined ability of the Ruling Pair.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {55, 23, 32, 46, 88}
<strong>Output:</strong>
101
<strong>Explanation:</strong>
All possible pairs that are 
compatible with each other are-&nbsp;(23, 32) 
with digit sum 5 and&nbsp;(55, 46) with digit 
sum 10. Out of these the maximum combined 
ability pair is (55, 46) i.e. 55 + 46 = 101</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
arr[] = {18, 19, 23, 15}
<strong>Output:</strong>
-1
<strong>Explanation:</strong>
No two people are compatible with each other.&nbsp;
</span></pre>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function <strong>RulingPairâ€‹</strong><strong>()</strong> which takes the array arr[] and&nbsp;size of array N as input parameters and returns the answer. If No two people are compatible with<br>
each other&nbsp;then return&nbsp;-1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup>&nbsp;<br>
1 ≤ arr[i] ≤ 10<sup>9</sup></span></p>
</div>