# Max value after m range operation
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr</strong> of size <strong>N</strong> with all initial values as 0, the task is to perform the following <strong>M</strong> range increment operations as shown below:<strong> </strong><br>
Increment(a<sub>i</sub>, b<sub>i</sub>, k<sub>i</sub>) : Increment values from index 'a<sub>i</sub>' to 'b<sub>i</sub>' by 'k<sub>i</sub>'.<br>
After M operations, calculate the maximum value in the array <strong>arr[]</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 5, M = 3, a[] = {0, 1, 2}
b[] = {1, 4, 3}, k[] = {100, 100, 100}
<strong>Output:</strong> 200
<strong>Explanation</strong>: Initially array = {0, 0, 0, 
                                   0, 0}
After first operation : {100, 100, 0, 0, 0}
After second operation: {100, 200, 100, 100, 100}
After third operation: {100, 200, 200, 200, 100}
Maximum element after m operations is 200.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 4, M = 3, a[] = {1, 0, 3} 
b[] = {2, 0, 3}, k[] = {603, 286, 882}
<strong>Output:</strong> 882
<strong>Explanation</strong>: Initially array = {0, 0, 0, 0}
After first operation: {0, 603, 603, 0}
After second operation: {286, 603, 603, 0}
After third operation: {286, 603, 603, 882}
Maximum element after m operations is 882.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;You just need to complete the function <strong>findMax</strong>() that takes arrays<strong> a[], b[], k[]</strong> and integers<strong> N, M</strong> as parameters and returns the desired output.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(M+N).<br>
<strong>Expected Auxiliary Space:</strong> O(N).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup></span><br>
<span style="font-size:18px">0 ≤ a<sub>i </sub> ≤ b<sub>i</sub> ≤ N-1</span><br>
<span style="font-size:18px">1 ≤ M ≤ 10<sup>6</sup></span><br>
<span style="font-size:18px">0 ≤ k<sub>i</sub> ≤ 10<sup>6</sup></span></p>
</div>