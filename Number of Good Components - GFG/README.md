# Number of Good Components
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an undirected graph with <strong>V </strong>vertices(numbered from <strong>1</strong> to <strong>V</strong>) and <strong>E </strong>edges. Find the number of good components in the graph.<br>A component of the graph is good if and only if the component is a fully connected component.<br><strong>Note:&nbsp;</strong>A fully connected component&nbsp;is a subgraph of a given graph such that there's an&nbsp;edge between every pair of vertices in a component, the given graph can be a&nbsp;<strong>disconnected graph. </strong>Consider the adjacency list from vertices&nbsp;<strong>1</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;">Input: 
<img style="height: 239px; width: 350px;" src="https://media.geeksforgeeks.org/img-practice/good_comp_1-1656905170.png" alt="">

<strong>E</strong>=3 <strong>V</strong>=3
<strong>adj:</strong>
{{1, 2},
 {1, 3},
 {3, 2}}
<strong>Output: 1</strong></span><strong><span style="font-size: 18px;">
Explanation: </span></strong><span style="font-size: 18px;">We can see that there is only one 
component in the graph and in this component 
there is a edge between any two vertces</span><strong><span style="font-size: 18px;">.</span></strong></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong></span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/713974/Web/Other/0b0c03cb-9f66-4c94-8900-8120a171f9a3_1685087973.png"><span style="font-size: 18px;"><strong>
E</strong>=5 <strong>V</strong>=7
<strong>adj:</strong>
{{1, 2},
 {7, 2},
 {3, 5},
 {3, 4},
 {4, 5}}
<strong>Output: </strong>2
</span><strong><span style="font-size: 18px;">Explanation: </span></strong><span style="font-size: 18px;">We can see that there are 3 components
in the graph. For 1-2-7 there is no edge between
1 to 7, so it is not a fully connected component.
Rest 2 are individually fully connected component.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function<br><strong>findNumberOfGoodComponent() </strong>which takes an integer <strong>V </strong>and a list of edges <strong>adj </strong>as input parameters and returns an integer denoting the number of good components. </span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(V+E)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(depth of the graph)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V, E ≤ 10<sup>4</sup></span></p></div>