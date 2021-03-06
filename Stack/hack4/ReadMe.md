<b>Alexa has two stacks of non-negative integers, stack A=[a0,a1,....] and B=[b0,b1,....]stack where index denotes the top of the stack. Alexa challenges Nick to play the following game:

   * In each move, Nick can remove one integer from the top of either stack A or stack B.
   * Nick keeps a running sum of the integers he removes from the two stacks.
   * Nick is disqualified from the game if, at any point, his running sum becomes greater than some integer given at the beginning of the game.
   * Nick's final score is the total number of integers he has removed from the two stacks.

Given A,B, and x for g games, find the maximum possible score Nick can achieve (i.e., the maximum number of integers he can remove without being disqualified) during each game and print it on a new line.
</b>
<b>Input Format</b>

The first line contains an integer, (the number of games). The subsequent lines describe each game in the following format:

    The first line contains three space-separated integers describing the respective values of n(the number of integers in stack A),m (the number of integers in stack B), and x(the number that the sum of the integers removed from the two stacks cannot exceed).
    The second line contains space-separated integers describing the respective values of a0,a1,...
    The third line contains space-separated integers describing the respective values of b0,b1,...

<b>Constraints</b>

*1<=g<=50
*1<=n,m<=10^5
*0<=ai,bj<=10^6
*1<=x<=10^9

<b>Subtasks</b>

   * 1<=n,m<=100  for 50% of the maximum score.

<b>Output Format</b>

For each of the g games, print an integer on a new line denoting the maximum possible score Nick can achieve without being disqualified.

<b>Sample Input 0</b>

1
5 4 10
4 2 4 6 1
2 1 8 5

<b>Sample Output 0</b>

4
