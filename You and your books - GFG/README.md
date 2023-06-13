# You and your books
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">You have N stacks of books. Each stack of books has some non zero height Hi equal to the number of books on that stack ( considering all the books are identical and each book has a height of 1 unit ). In one move, you can select any number of consecutive stacks of books such that the height of each selected stack of books Hi &lt;= K . Once such a sequence of stacks is chosen , You can collect any number of books from the chosen sequence of stacks .<br>
What is the maximum number of books that you can collect this way ?</span></p>

<p><span style="font-size:20px"><strong>Input:</strong><br>
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. First line of each test case contains two space separated integers N and K where N is the number of stacks of books. Second line of each test case contains N space separated integers denoting the number of books Hi on each stack.</span></p>

<p><span style="font-size:20px"><strong>Output:</strong><br>
For each test case, print the maximum number of books you can collect.</span></p>

<p><span style="font-size:20px"><strong>Constraints:</strong><br>
1&lt;=T&lt;=105<br>
1&lt;=N&lt;=105<br>
1&lt;=K&lt;=109<br>
1&lt;=Hi&lt;=109</span></p>

<p><strong><span style="font-size:20px">Example(To be used only for expected output):</span></strong><br>
<span style="font-size:20px"><strong>Input</strong><br>
2<br>
8 1<br>
3 2 2 3 1 1 1 3<br>
8 2<br>
3 2 2 3 1 1 1 3<br>
&nbsp;<br>
<strong>Output</strong><br>
3<br>
4</span></p>

<p><br>
<span style="font-size:20px"><strong>Explanation :</strong></span><br>
<span style="font-size:18px"><strong>For the first test case</strong></span><br>
<span style="font-size:20px">N = 8 , K = 1 { 3 2 2 3 1 1 1 3 }<br>
We can collect maximum books from consecutive stacks numbered 5, 6 and 7 having height less than equal to K.</span><br>
<br>
<span style="font-size:18px"><strong>For the second test case</strong></span><br>
<span style="font-size:20px">N = 8 , K = 2 { 3 2 2 3 1 1 1 3 }<br>
We can collect maximum books from consecutive stacks numbered 2 and 3 having height less than equal to K.</span><br>
&nbsp;</p>
</div>