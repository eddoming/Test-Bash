# Kruskal Algorithm

* Makes locally optimal choices
* Basic idea: you consider edges in increasing order of weight, adding them to your tree/forest as long as they do not induce a cycle.

Input: A weighted, undirected graph $G=(V,E)$

Output:  A mst T

* Sort the edges E in non-decresing order
* $E_T \leftarrow \Eta$
* $V_T \leftarrow 0$

for each \( e_k \epsilon E \) (Sorted)
* if ($V,E_T$) is alpahetic (it is cyclic?)
    * add $e_k$ to $E_T$
    * if $|E_T|= n-1$ exit

Output $(V,E_T)$

* Order $|E| log(|E|) = O(m*log(m))$

Against DFS $O(n+m)$

* exectuded at most m times
* $O(m-(n+m))=O(m**2)=O(n**4)$
* Fact each DFS is on a sparse graph $m=O(n)$

$O(n**4) \rightarrow O(n**2)$