In this challenge, you must implement a simple text editor. Initially, your editor contains an empty string,S. You must perform Q operations of the following 4 types:

    append(W)- Append string W to the end of S.
    delete(k)- Delete the last k characters of S.
    print(k)- Print the K character of .
    undo()- Undo the last (not previously undone) operation of type 1 or 2, reverting S to the state it was in prior to that operation.
<b>Input Format</b>

The first line contains an integer,Q, denoting the number of operations.
Each line i of the Q subsequent lines (where 0<=i<=Q) defines an operation to be performed. Each operation 
starts with a single integer,t (where t E(1,2,3,4)), denoting a type of operation as defined in the Problem Statement above. If the operation requires an argument,t is followed by its space-separated argument. For example, if t=1 and W="abcd", line will i be 1 abcd. 

<b>Constraints</b>
   *1<=Q<=10^6
   *1<=k<=|s| 	
   *The sum of the lengths of all W in the input <=10^6.
   *The sum of k over all delete operations <=2.10^6 .
   *All input characters are lowercase English letters.
   *It is guaranteed that the sequence of operations given as input is possible to perform.
Output Format

Each operation of type must print the character on a new line.

<b>Sample Input</b>

8
1 abc
3 3
2 3
1 xy
3 2
4 
4 
3 1

<b>Sample Output</b>

c
y
a
