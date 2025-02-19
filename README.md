A-A

Problem Statement
In this problem, an input file contains multiple test cases.
You are first given an integer 
T
T. Solve the following problem for 
T
T test cases.

We have 
N
N positive integers 
A
1
,
A
2
,
.
.
.
,
A
N
A 
1
​
 ,A 
2
​
 ,...,A 
N
​
 . How many of them are odd?
Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
1
≤
A
i
≤
10
9
1≤A 
i
​
 ≤10 
9
 
All values in the input are integers.
Input
The input is given from Standard Input in the following format, where 
test
i
test 
i
​
  represents the 
i
i-th test case:

T
T
test
1
test 
1
​
 
test
2
test 
2
​
 
⋮
⋮
test
T
test 
T
​
 
Each test case is in the following format:

N
N
A
1
A 
1
​
  
A
2
A 
2
​
  
…
… 
A
N
A 
N
​
 
Output
Print 
T
T lines. The 
i
i-th line should contain the answer for the 
i
i-th test case.

Sample 1
Inputcopy	Outputcopy
4
3
1 2 3
2
20 23
10
6 10 4 1 5 9 8 6 5 1
1
1000000000
2
1
5
0


B-B

Problem Statement
Takahashi has recorded the number of steps he walked for 
N
N weeks. He walked 
A
i
A 
i
​
  steps on the 
i
i-th day.

Find the total number of steps Takahashi walked each week.
More precisely, find the sum of the steps for the first week (the 
1
1-st through 
7
7-th day), the sum of the steps for the second week (the 
8
8-th through 
14
14-th day), and so on.

Constraints
1
≤
N
≤
10
1≤N≤10
0
≤
A
i
≤
10
5
0≤A 
i
​
 ≤10 
5
 
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
N
A
1
A 
1
​
  
A
2
A 
2
​
  
…
… 
A
7
N
A 
7N
​
 
Output
Let 
B
i
B 
i
​
  be the number of steps walked for the 
i
i-th week. Print 
B
1
,
B
2
,
…
,
B
N
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  in this order, separated by spaces.

Sample 1
InputOutput
2
1000 2000 3000 4000 5000 6000 7000 2000 3000 4000 5000 6000 7000 8000
28000 35000

C-C

Problem Statement
There is a stack of 
N
N cards, and the 
i
i-th card from the top has an integer 
A
i
A 
i
​
  written on it.

You take 
K
K cards from the bottom of the stack and place them on top of the stack, maintaining their order.

Print the integers written on the cards from top to bottom after the operation.

Constraints
1
≤
K
<
N
≤
100
1≤K<N≤100
1
≤
A
i
≤
100
1≤A 
i
​
 ≤100
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
N 
K
K
A
1
A 
1
​
  
A
2
A 
2
​
  
…
… 
A
N
A 
N
​
 
Output
Let 
B
i
B 
i
​
  be the integer written on the 
i
i-th card from the top of the stack after the operation. Print 
B
1
,
B
2
,
…
,
B
N
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  in this order, separated by spaces.

Sample 1
Inputcopy	Outputcopy
5 3
1 2 3 4 5
3 4 5 1 2

D-D

Problem Statement
There was a contest with 
N
N problems. The 
i
i-th 
(
1
≤
i
≤
N
)
(1≤i≤N) problem was worth 
A
i
A 
i
​
  points.

Snuke took part in this contest and solved 
M
M problems: the 
B
1
B 
1
​
 -th, 
B
2
B 
2
​
 -th, 
…
…, and 
B
M
B 
M
​
 -th ones. Find his total score.

Here, the total score is defined as the sum of the points for the problems he solved.

Constraints
1
≤
M
≤
N
≤
100
1≤M≤N≤100
1
≤
A
i
≤
100
1≤A 
i
​
 ≤100
1
≤
B
1
<
B
2
<
…
<
B
M
≤
N
1≤B 
1
​
 <B 
2
​
 <…<B 
M
​
 ≤N
All values in the input are integers.
Input
The input is given from Standard Input in the following format:

N
N 
M
M
A
1
A 
1
​
  
A
2
A 
2
​
  
…
… 
A
N
A 
N
​
 
B
1
B 
1
​
  
B
2
B 
2
​
  
…
… 
B
M
B 
M
​
 
Output
Print the answer as an integer.

Sample 1
Inputcopy	Outputcopy
3 2
10 20 30
1 3
40

E-E

Problem Statement
Takahashi turned on a computer at time 
0
0 and clicked the mouse 
N
N times. The 
i
i-th 
(
1
≤
i
≤
N
)
(1≤i≤N) click was at time 
T
i
T 
i
​
 .

If he consecutively clicked the mouse at time 
x
1
x 
1
​
  and time 
x
2
x 
2
​
  (where 
x
1
<
x
2
x 
1
​
 <x 
2
​
 ), a double click is said to be fired at time 
x
2
x 
2
​
  if and only if 
x
2
−
x
1
≤
D
x 
2
​
 −x 
1
​
 ≤D.

What time was a double click fired for the first time? If no double click was fired, print -1 instead.

Constraints
1
≤
N
≤
100
1≤N≤100
1
≤
D
≤
10
9
1≤D≤10 
9
 
1
≤
T
i
≤
10
9
(
1
≤
i
≤
N
)
1≤T 
i
​
 ≤10 
9
 (1≤i≤N)
T
i
<
T
i
+
1
(
1
≤
i
≤
N
−
1
)
T 
i
​
 <T 
i+1
​
 (1≤i≤N−1)
All values in the input are integers.
Input
The input is given from Standard Input in the following format:

N
N 
D
D
T
1
T 
1
​
  
T
2
T 
2
​
  
…
… 
T
N
T 
N
​
 
Output
If at least one double click was fired, print the time of the first such event; otherwise, print -1.

Sample 1
Inputcopy	Outputcopy
4 500
300 900 1300 1700
1300

F-F

Problem Statement
Given eight integers 
S
1
,
S
2
,
…
S 
1
​
 ,S 
2
​
 ,…, and 
S
8
S 
8
​
 , print Yes if they satisfy all of the following three conditions, and No otherwise.

The sequence 
(
S
1
,
S
2
,
…
,
S
8
)
(S 
1
​
 ,S 
2
​
 ,…,S 
8
​
 ) is monotonically non-decreasing. In other words, 
S
1
≤
S
2
≤
⋯
≤
S
8
S 
1
​
 ≤S 
2
​
 ≤⋯≤S 
8
​
 .
S
1
,
S
2
,
…
S 
1
​
 ,S 
2
​
 ,…, and 
S
8
S 
8
​
  are all between 
100
100 and 
675
675, inclusive.
S
1
,
S
2
,
…
S 
1
​
 ,S 
2
​
 ,…, and 
S
8
S 
8
​
  are all multiples of 
25
25.
Constraints
0
≤
S
i
≤
1000
0≤S 
i
​
 ≤1000
All input values are integers.
Input
The input is given from Standard Input in the following format:

S
1
S 
1
​
  
S
2
S 
2
​
  
…
… 
S
8
S 
8
​
 
Output
Print the answer.

Sample 1
Inputcopy	Outputcopy
125 175 250 300 400 525 600 650
Yes
