# Skip the work
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Given an array <strong>A[ ]</strong> denoting the time taken to complete <strong>N </strong>tasks, determine the minimum amount of time required to finish the tasks considering that you can skip any task, but&nbsp;<strong>skipping two consecutive tasks is forbidden</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
A[] ={10,20}
<strong>Output:</strong> 10
<strong>Explanation</strong>: we can take time of
10 units and skip 20 units time.
</span></pre>

<p><br>
<span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 4
A[] = {10,5,7,10}
<strong>Output:</strong> 12
<strong>Explanation</strong>: we can skip both the
tens and pick 5 and 7 only.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minAmount()&nbsp;</strong>which accepts array <strong>A[]&nbsp;</strong>and its size&nbsp;<strong>N</strong>&nbsp;as input parameter and returns&nbsp;</span><span style="font-size:20px">minimum amount of time required to finish the tasks.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>6</sup></span></p>

<p>&nbsp;</p>
</div>