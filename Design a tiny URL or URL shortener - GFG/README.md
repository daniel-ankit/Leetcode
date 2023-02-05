# Design a tiny URL or URL shortener
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Design a system that takes big URLs like “<strong>http://www.geeksforgeeks.org/count-sum-of-digits-in-numbers-from-1-to-n/</strong>” and converts them into a short<strong>&nbsp;URL</strong>.&nbsp;It is given that URLs are stored in database and every URL has an associated integer <strong>id</strong>.&nbsp; So your program should take an integer id and generate a&nbsp;URL.&nbsp; </span></p>

<p><span style="font-size:18px">A URL character can be one of the following</span></p>

<ol>
	<li><span style="font-size:18px">A lower case alphabet [‘a’ to ‘z’], total 26 characters</span></li>
	<li><span style="font-size:18px">An upper case alphabet [‘A’ to ‘Z’], total 26 characters</span></li>
	<li><span style="font-size:18px">A digit [‘0′ to ‘9’], total 10 characters</span></li>
</ol>

<p><span style="font-size:18px">There are total 26 + 26 + 10 = 62 possible characters.</span></p>

<p><span style="font-size:18px">So the task is to convert an integer (database id) to a base 62 number where digits of 62 base are "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN<br>
OPQRSTUVWXYZ0123456789"</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 12345
<strong>Output:</strong> 
dnh
12345
<strong>Explanation:</strong> "dnh" is the url for id 12345
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 30540
<strong>Output:</strong> 
h6K
30540
<strong>Explanation:</strong> "h6K" is the url for id 30540</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>idToShortURL()</strong>&nbsp;which takes the integer&nbsp;<strong>n</strong><strong>&nbsp;</strong>as parameters and returns an string denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>18</sup></span></p>

<p>&nbsp;</p>
</div>