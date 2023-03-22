# Transitive closure of a Graph
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a directed graph, find out if a vertex j is reachable from another vertex i for all vertex pairs (i, j) in the given graph. Here reachable mean that there is a path from vertex i to j. The reach-ability matrix is called transitive closure of a graph. The directed graph is represented by adjacency list <strong>graph</strong>&nbsp;where there are <strong>N</strong> vertices.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 4
graph = {{1, 1, 0, 1}, 
&nbsp;        {0, 1, 1, 0}, 
&nbsp;        {0, 0, 1, 1}, 
&nbsp;        {0, 0, 0, 1}}
<strong>Output:</strong> {{1, 1, 1, 1}, 
&nbsp;        {0, 1, 1, 1}, 
&nbsp;        {0, 0, 1, 1}, 
&nbsp;        {0, 0, 0, 1}}
<strong>Explaination: </strong>The output list shows the 
reachable indexes.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>transitiveClosure()</strong> which takes N and graph as input parameters and returns the transitive closure of the graph in&nbsp;form of 2d array.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>3</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(N<sup>2</sup>)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 100&nbsp;&nbsp;</span></p>
</div>