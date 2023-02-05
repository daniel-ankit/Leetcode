# CamelCase Pattern Matching
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a dictionary of words where each word follows CamelCase notation, print all words (in lexcographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.</span></p>

<p><span style="font-size:18px"><em>CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include: PowerPoint and WikiPedia, GeeksForGeeks, CodeBlocks, etc.</em></span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=8
Dictionary=["Hi","Hello","HelloWorld",
"HiTech","HiGeek","HiTechWorld",
"HiTechCity","HiTechLab"]
Pattern="HA"
<strong>Output:</strong>

<strong>Explanation:</strong>
Since the pattern matches none of the words
of the string,the output is empty.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=3
Dictionary=["WelcomeGeek",
"WelcomeToGeeksForGeeks","GeeksForGeeks"]
Pattern="WTG"
<strong>Output:
</strong>WelcomeToGeeksForGeeks
<strong>Explanation:
</strong>Since only WelcomeToGeeksForGeeks matches 
the pattern, it is the only answer.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your Task is to complete the function <strong>CamelCase()</strong> which takes an integer N, a Vector of strings Dictionary and a string Pattern and returns the strings in the dictionary that match with the pattern.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(N*|S|)<br>
S=Longest string in Dictionary<br>
<strong>Expected Auxillary Space:</strong>O(26*N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=1000<br>
1&lt;=|S|&lt;=100<br>
1&lt;=|Pattern|&lt;=|S|&lt;=100<br>
S is the longest word in Dictionary.</span></p>
</div>