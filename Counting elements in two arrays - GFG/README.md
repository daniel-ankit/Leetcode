# Counting elements in two arrays
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two unsorted arrays <strong>arr1[]</strong> and <strong>arr2[]</strong>. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>m = 6, n = 6
arr1[] = {1,2,3,4,7,9}
arr2[] = {0,1,2,1,1,4}
<strong>Output: </strong>4 5 5 6 6 6<strong>
Explanation: </strong>Number of&nbsp;elements less than
or equal to 1, 2, 3, 4, 7, and 9 in the
second array are respectively 4,5,5,6,6,6</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>m = 5, n = 7
arr1[] = {4,8,7,5,1}
arr2[] = {4,48,3,0,1,1,5}
<strong>Output: </strong>5 6 6 6 3
<strong>Explanation: </strong>Number of&nbsp;elements less than
or equal to 4, 8, 7, 5, and 1 in the
second array are respectively 5,6,6,6,3</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task :</strong><br>
Complete the function&nbsp;<strong>countEleLessThanOrEqual()&nbsp;</strong>that takes two array arr1[], arr2[],&nbsp;&nbsp;m, and n&nbsp;as input and returns an array containing the required results(the count of elements less than or equal to it in arr2 for each element in arr1 where i<sub>th</sub> output represents the count for i<sub>th</sub> element in arr1.)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O((m + n) * log n).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(m).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=m,n&lt;=10^5<br>
0&lt;=arr1[i],arr2[j]&lt;=10^5</span></p>
</div>