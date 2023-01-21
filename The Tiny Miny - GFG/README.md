# The Tiny Miny
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Find the smallest&nbsp;number that can be framed using the series created by the digits obtained by raising the given number&nbsp; (&nbsp; "a"&nbsp; ) to the power from 1 to&nbsp;&nbsp;n&nbsp; i.e.&nbsp;&nbsp;a^1 , a^2 , a^3 .......a^n . We get&nbsp; b1,b2 , b3 , ........... bn .&nbsp;<br>
Using all the digits&nbsp; ( including repeating ones )&nbsp; that appear inb1 ,b2 , b3 .... bn . Frame a number that contains all the digits ( including repeating ones )&nbsp; and find out the combination of digits that make the smallest number of all possible combinations. Excluding or neglecting zeroes&nbsp; ( " 0 " )&nbsp; .&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> A = 9 and N = 4
<strong>Output :</strong> 1125667899
<strong>Explanation:
</strong>9^1 = 9
9^2 = 81
9^3 = 729
9^4&nbsp; = 6561&nbsp;
9 81 729 6561
We get&nbsp; 9817296561 .
Using 9817296561 number we need to find 
the smallest possible number that can be 
framed using other combinations of the 
samenumber .
1298796561
8799265611
2186561997
.
.
.
1125667899
The smallest&nbsp;possible number that can be 
framed is1125667899 .&nbsp;

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> A = 5 and N = 1
<strong>Output :</strong> 5

</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>tiny_miny()</strong> that takes two integers <strong>A</strong>, <strong>N,&nbsp;</strong>and return a string&nbsp;which is the smallest number out of all combinations .how many tabs are open at the end. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>LogA).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:&nbsp; &nbsp;</strong></span></p>

<p><span style="font-size:18px">0&nbsp;≤ N ≤ 5<br>
0 ≤ A ≤ 70</span></p>
</div>