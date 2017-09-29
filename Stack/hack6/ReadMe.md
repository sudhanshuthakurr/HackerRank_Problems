Given an array A[] of N distinct elements. Let M1 and M2 be the smallest and the next smallest element in the interval[l,r]where1<=L<=R<=N.

.Si=((M1 n M2) xor (M1 ? M2))n(M1 xor M2)).

where n,?,xor are the bitwise operators , and respectively.
Your task is to find the maximum possible value of Si.

<b>Input Format</b>

First line contains integer N.
Second line contains integers N, representing elements of the array A[]. 

<b>Constraints</b>
1<N<=10^6
1<=Ai<=10^9

<b>Output Format</b>

Print the value of maximum possible value of Si.

<b>Sample Input</b>

5
9 6 3 5 2

<b>Sample Output</b>

15

