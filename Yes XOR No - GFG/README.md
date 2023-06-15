# Yes XOR No
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given two arrays <strong>A[]</strong> and <strong>B[]</strong>, each of size <strong>N</strong>, where each element&nbsp;<strong>A<sub>i</sub></strong>&nbsp;and <strong>B<sub>j&nbsp;</sub></strong>are&nbsp;distinct. Let's consider an integer&nbsp;<strong>X</strong> is the count&nbsp;of all different pairs of <strong>A<sub>i</sub></strong>&nbsp;and <strong>B<sub>j</sub></strong>, such that <strong>A<sub>i</sub>&nbsp;XOR&nbsp;B<sub>j</sub></strong>&nbsp;is present in any of the two arrays. Return "<strong>Yes"&nbsp;</strong>(case-sensitive)<strong>&nbsp;</strong>if&nbsp;<strong>X</strong> is even, else return&nbsp;<strong>"No"</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>N = </strong> 3</span>
<span style="font-size:18px"><strong>A[] = </strong>{1, 5, 7}</span>
<span style="font-size:18px"><strong>B[] = </strong>{2, 4, 8}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">Yes</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">XOR(1,2)=3
XOR(1,4) = 5 is present in <strong>A[]</strong>
XOR(1,8) = 9
XOR(5,2) = 7 is present in <strong>A[]</strong>
XOR(5,4) = 1 is present in <strong>A[]</strong>
XOR(5,8) = 13
XOR(7,2) = 5 is present in <strong>A[]</strong>
XOR(7,4) = 3
XOR(7,8)=15
Out of all these XOR operations, 
5,7,1,5 are present, so count of X = 4 
which is even. Hence the output is "Yes"</span>.</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>N = </strong> 2</span>
<span style="font-size:18px"><strong>A[] = </strong>{1, 5}</span>
<span style="font-size:18px"><strong>B[] = </strong>{2, 4}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">Yes</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">XOR(1,2) = 3
XOR(1,4) = 5 is present in A[]
XOR(5,2)=7
XOR(5,4)=1 is present in A[]
Out of all these XOR operations,
1,5 are present,
So count of X = 2 which is even.
Hence the output is "Yes"</span>.</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>yesXorNo()</strong> which takes an Integer N and two arrays A[] and B[] of size N as input and returns "Yes" if the count of X is even, else "No".</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= A[i],B[i] &lt;= 10<sup>9</sup></span></p>
</div>