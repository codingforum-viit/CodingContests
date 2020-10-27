#### Dynamic Programming with Binary Search

It's natural to attempt dynamic programming, as we encounter similar subproblems. Our state is  (P,F) : P Glasses and  F floors left. When we drop a glass from floor  X, it either survives and we have state  (P,F-X), or it breaks and we have state (P-1,X-1).

This approach would lead to a  O(P F<sup>2</sup>)  algorithm, but this is not efficient enough for the given constraints. However, we can try to speed it up. Let  dp(P,F)  be the maximum number of moves needed to solve the problem in state  (P,F). Then, by our reasoning above, we have:

dp(P, F) = 1 + min<sub>1≤X≤F</sub>​(max(dp(P−1,X−1),dp(P,F−X)))

Now for the key insight: Because dp(K,N)  is a function that is increasing on  F, the first term T<sub>1</sub>​=dp(P−1,X−1) in our expression is an increasing function on  X, and the second term T<sub>2</sub>​=dp(P,F−X)  is a decreasing function on  X. This means that we do not need to check every  X  to find the minimum -- instead, we can binary search for the best X.

if  T<sub>1</sub><T<sub>2</sub>, then the  X value chosen is too small; and if T<sub>1</sub>>T<sub>2</sub>  , then  X is too big. However, this argument is not quite correct: when there are only two possible values of  X, we need to check both.

Using the above fact, we can use a binary search to find the correct value of  X  more efficiently than checking all  N  of them.
