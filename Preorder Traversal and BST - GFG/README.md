# Preorder Traversal and BST
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[ ]&nbsp;</strong>of size <strong>N&nbsp;</strong>consisting of <strong>distinct</strong> integers, write a program that&nbsp;returns&nbsp;<strong>1</strong> if given array can represent preorder traversal of a possible BST, else returns<strong>&nbsp;0</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
arr = {2, 4, 3</span><span style="font-size:18px">}
<strong>Output:</strong> 1
<strong>Explaination:</strong> Given arr[] can represent
preorder traversal of following BST:
&nbsp;              2
&nbsp;               \
&nbsp;                4
&nbsp;               /
&nbsp;              3</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
Arr = {2, 4, 1}
<strong>Output:</strong> 0
<strong>Explaination:</strong> Given arr[] cannot represent
preorder traversal of a BST.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>canRepresentBST()</strong>&nbsp;which takes the array a<strong>rr[]</strong> and its size <strong>N&nbsp;</strong>as input parameters&nbsp;and returns&nbsp;<strong>1</strong> if given array can represent preorder traversal of a BST, else returns<strong>&nbsp;0</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ arr[i]&nbsp;≤ 10<sup>5</sup></span></p>
</div>