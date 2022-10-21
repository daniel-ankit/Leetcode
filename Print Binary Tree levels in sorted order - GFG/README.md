# Print Binary Tree levels in sorted order
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr</strong>[] which contains data of <strong>N</strong> nodes of Complete Binary tree in level order fashion. The task is to print the level order traversal in sorted order. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 7
arr[] = {7 6 5 4 3 2 1}
<strong>Output:
</strong>7
5 6
1 2 3 4
<strong>Explanation: </strong>The formed Binary Tree is:
             7
          /      \
        6         5
      /  \      /   \
     4    3    2     1</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
arr[] = {5 6 4 9 2 1}
<strong>Output:</strong>
5
4 6
1 2 9
<strong>Explanation: </strong>The formed Binary Tree is:
             5
          /     \
        6        4
      /  \      /    
     9    2    1    </span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>binTreeSortedLevels()&nbsp;</strong>which takes the array arr[] and its size N as inputs and returns a 2D array where the i-th array denotes the nodes of the i-th level in sorted order.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(NlogN).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>4</sup></span></p>

<p>&nbsp;</p>
</div>