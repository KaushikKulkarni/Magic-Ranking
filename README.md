#Magic Rankings .
---

* This is my third completed Problem from the many PS's of CodeChef.com .
* This was a good problem basically for the beginners who have a little idea about dynamic programming.
* And also at the first I was stuck ,and then after a little scratching my head I got it finally.
* This has around 250 submissions .
* And yes,Even I am undergoing a learning procedure .
* So,suggestions are most welcome .
* Email me @ kaushikpeace@gmail.com .


***
###The Problem Statement is as follows :
***
Everybody loves magic, especially magicians who compete for glory on the Byteland Magic Tournament. Magician Cyael is one such magician.

Cyael has been having some issues with her last performances and today she’ll have to perform for an audience of some judges, who will change her tournament ranking, possibly increasing it. As she is a great magician she managed to gather a description of the fixed judges’ disposition on the room (which is represented as an N × N square matrix), such that she knows in advance the fixed points each judge will provide. She also knows that the room is divided into several parallel corridors, such that we will denote the j-th cell on corridor i, as [i][j]. Note that some judges can award Cyael, zero points or negative points, as they are never pleased with her performance.

There is just one judge at each cell of the matrix, except the cells [1][1] and [N][N].

To complete her evaluation, she must start on the top leftmost corner of the room (cell [1][1]), and finish on the bottom right corner (cell [N][N]), moving either to the cell directly in front of her on the same corridor (that is, moving from cell [r][c] to cell [r][c+1], where c+1 ≤ N) or to the cell in the next corridor directly in front of where she is (that is, moving from cell [r][c] to cell [r+1][c], where r+1 ≤ N). She will keep doing this until she reaches the end point of the room, i.e. last cell [N][N] on the last corridor. Cyael will be judged at all visited cells with a judge.

Cyael wants to maximize her average score at end of her performance. More specifically, if she passes K judges, each being on cell [i1][j1], cell [i2][j2], ..., cell [iK][jK] respectively, then she wants to maximize (S[i1][j1] + S[i2][j2] + ... + S[iK][jK]) / K, where S[i][j] denotes the points that the judge will give her on the cell [i][j].

Help her determine the best path she has to follow in order to maximize her average points.
Input

The first line contains a single integer T denoting the number of test cases. The description for T test cases follows. For each test case, the first line contains a single integer N. Each of the next N lines contains N space-separated integers.
The j-th integer S[i][j] in i-th line denotes the points awarded by the judge at cell [i][j].
Note that the cells [1][1] and [N][N] have no judges, so S[1][1] and S[N][N] will be 0.
Output

For each test case, if the maximum possible average points Cyael can obtain is negative, output a single line containing "Bad Judges" (quotes for clarity). Otherwise, output the maximum possible average points. The answer will be considered correct if it has an absolute error no more than 10-6.
Constraints

1 ≤ T ≤ 20
2 ≤ N ≤ 100
-2500 ≤ S[i][j] ≤ 2500
S[1][1] = S[N][N] = 0

Your code will be judged against several input files.
Example

<b>Input:</b>

2<br>
2<br>
0 -4<br>
8 0<br>
2<br>
0 -45<br>
-3  0


<b>Output:</b>

8.000000<br>
Bad Judges<br>

---

