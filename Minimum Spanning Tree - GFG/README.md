# Minimum Spanning Tree
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a weighted, undirected and connected graph of <strong>V</strong> vertices and <strong>E</strong> edges. The task is to find the sum of weights of the edges of the&nbsp;Minimum Spanning Tree.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>3 3
0 1 5
1 2 3
0 2 1</span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700343/Web/Other/064ccfb5-e351-4908-a660-b228a091eb47_1685086606.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
4
<strong>Explanation</strong>:</span>
<img style="height: 207px; width: 288px;" src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700343/Web/Other/64f692e2-1acf-4515-8f46-516521cf0bab_1685086607.png" alt="">
<span style="font-size: 18px;">The Spanning Tree resulting in a weight
of 4 is shown above.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>2 1
0 1 5</span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700343/Web/Other/944e4620-f860-4e62-aa2a-086f31e142cb_1685086607.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
5
<strong>Explanation</strong>:
Only one Spanning Tree is possible
which has a weight of 5.</span>
</pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your task:</strong><br>Since this is a functional problem you don't have to worry about input, you just have to complete the function&nbsp; <strong>spanningTree()</strong> which takes number of vertices V<strong> </strong>and<strong>&nbsp;</strong>an adjacency matrix adj as input parameters&nbsp;and returns an integer denoting the sum of weights of the edges of the Minimum Spanning Tree. Here adj[i] contains a list of lists containing two integers where the first integer a[i][0]&nbsp;denotes that there is an edge between i and a[i][0][0]&nbsp;and second integer a[i][0][1] denotes that the distance between edge i and a[i][0][0]&nbsp;is a[i][0][1].</span></p>
<p><span style="font-size: 18px;">In other words ,&nbsp;adj[i][j] is of form&nbsp; { u , wt } . So,this denotes that i th node is connected to u th node with&nbsp; edge weight equal to wt.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(ElogV).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(V<sup>2</sup>).</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V</span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> 1000<br>V-1 </span><span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> E </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> (V*(V-1))/2<br>1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> w </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> 1000<br>Graph is connected and&nbsp;doesn't contain self loops &amp;&nbsp;multiple edges.</span></p></div>