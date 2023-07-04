# Number of subsets with product less than k
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[]</strong> of <strong>N</strong> elements. Find the number of non-empty subsets whose product of elements is less than or equal to a given integer <strong>K</strong>. </span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
arr[] = {2, 4, 5, 3}
K = 12
<strong>Output:
</strong>8
<strong>Explanation:</strong>
All possible subsets whose 
products are less than 12 are:
(2), (4), (5), (3), (2, 4), (2, 5), (2, 3), (4, 3)</span></pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
arr[] = {9, 8, 3}
K = 2 
<strong>Output:</strong>
0</span>
<span style="font-size:18px"><strong>Explanation:</strong>
There is no subsets with product less
than or equal to 2.</span>

</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>numOfSubsets()</strong>&nbsp;which takes 2 integers N, and K, and an array arr of size N as input and returns the number of subsets with product less equal to K.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*2<sup>N/2</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 30<br>
1 ≤ arr[i] ≤ 10<br>
1 ≤ K ≤ 10<sup>6</sup></span></p>
</div>