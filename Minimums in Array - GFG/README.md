# Minimums in Array
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given two arrays A and B each containing N numbers. You need to choose exactly one number from A and exactly one number from B such that the index of the two chosen numbers is not same and the sum of the 2 chosen values is minimum. Formally, if you chose ith element from A whose value is x and jth element from B whose value is y, you need to minimize the value of (x+y) such that i is not equal to j.<br>
Your objective is to find this minimum value.</span></p>

<p><span style="font-size:18px">NOTE: If not possible print "-1" without quotes.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
1
5
5 4 3 2 1
1 2 3 4 5

<strong>Output:</strong>
2
<strong>Explanation:</strong>
Minimum sum will be obtained by choosing
number at the last index of first array i.e.
5th element of the first array(1) and first
index of the second array ie first element
of second array (1).

Sum=1+1=2 as their indexes are different
but sum is minimum.
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>getMin()</strong>&nbsp;which takes the array <strong>A[]</strong>, <strong>B[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the required answer. If answer is not present, return <strong>-1</strong>.<br>
<br>
<strong>Expected Time Complexity:</strong> O(N. Log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(N)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i], B[i] ≤ 10<sup>5</sup></span></p>
</div>