# Sum of permutations
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Given N&nbsp;distinct digits in an array A (from 1&nbsp;to 9), Your task is to complete the function <strong>getSum</strong>&nbsp;which finds&nbsp;sum of all n digit numbers that can be formed using these digits.&nbsp;<br>
<br>
<strong>Note:</strong> Since the output can be large&nbsp;take modulo 1000000007<br>
<br>
<strong>Input:</strong><br>
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains an integer N . In the next line are N space separated digits.<br>
<br>
<strong>Output:</strong><br>
For each test case in a new line output will be the&nbsp;sum of all n digit numbers that can be formed using these digits.<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=N&lt;=9<br>
<br>
<strong>Example(To be used only for expected output):<br>
Input:</strong><br>
2<br>
3<br>
1 2 3<br>
2<br>
1 2<br>
<strong>Output:</strong><br>
1332<br>
33<br>
<br>
<strong>Explanation:</strong></span><br>
<span style="font-size:18px"><strong>For first test case</strong></span><br>
<span style="font-size:20px">the numbers formed will be 123 , 132 , 312 , 213, 231 , 321<br>
sum = 123 + 132 + 312 + 213 + 231 + 321 = 1332</span><br>
<br>
<span style="font-size:18px"><strong>For second test case</strong></span><br>
<span style="font-size:20px">the numbers&nbsp;formed will be 12, 21<br>
sum = 12 + 21 = 33</span></p>
</div>