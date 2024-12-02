/*
F. Inconvenient Pairs
time limit per test2 seconds
memory limit per test256 megabytes
There is a city that can be represented as a square grid with corner points in
(0,0) and (106,106)
.

The city has n
 vertical and m
 horizontal streets that goes across the whole city, i. e. the i
-th vertical streets goes from (xi,0)
 to (xi,106)
 and the j
-th horizontal street goes from (0,yj)
 to (106,yj)
.

All streets are bidirectional. Borders of the city are streets as well.

There are k
 persons staying on the streets: the p
-th person at point (xp,yp)
 (so either xp
 equal to some xi
 or yp
 equal to some yj
, or both).

Let's say that a pair of persons form an inconvenient pair if the shortest path
from one person to another going only by streets is strictly greater than the
Manhattan distance between them.

Calculate the number of inconvenient pairs of persons (pairs (x,y)
 and (y,x)
 are the same pair).

Let's recall that Manhattan distance between points (x1,y1)
 and (x2,y2)
 is |x1−x2|+|y1−y2|
.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains three integers n
, m
 and k
 (2≤n,m≤2⋅105
; 2≤k≤3⋅105
) — the number of vertical and horizontal streets and the number of persons.

The second line of each test case contains n
 integers x1,x2,…,xn
 (0=x1<x2<⋯<xn−1<xn=106
) — the x
-coordinates of vertical streets.

The third line contains m
 integers y1,y2,…,ym
 (0=y1<y2<⋯<ym−1<ym=106
) — the y
-coordinates of horizontal streets.

Next k
 lines contains description of people. The p
-th line contains two integers xp
 and yp
 (0≤xp,yp≤106
; xp∈{x1,…,xn}
 or yp∈{y1,…,ym}
) — the coordinates of the p
-th person. All points are distinct.

It guaranteed that sum of n
 doesn't exceed 2⋅105
, sum of m
 doesn't exceed 2⋅105
 and sum of k
 doesn't exceed 3⋅105
.

Output
For each test case, print the number of inconvenient pairs.
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

#define ull unsigned long long

using namespace std;

int main() {
  fast_io;

  ull testCases;
  ull vertNum;
  ull horNum;
  ull peopleNum;
  vector<ull> vertSteets;
  vector<ull> horStreets;
  vector<pair<ull, ull>> peopleInfo;
  ull aux1;
  ull aux2;

  cin >> testCases;

  for (unsigned i = 0; i < testCases; i++) {
    cin >> vertNum;
    cin >> horNum;
    cin >> peopleNum;
    vertSteets.clear();
    horStreets.clear();
    peopleInfo.clear();

    for (unsigned j = 0; j < vertNum; j++) {
      cin >> aux1;
      vertSteets.push_back(aux1);
    }

    for (unsigned j = 0; j < horNum; j++) {
      cin >> aux1;
      horStreets.push_back(aux1);
    }

    for (unsigned j = 0; j < peopleNum; j++) {
      cin >> aux1;
      cin >> aux2;
      peopleInfo.push_back(pair(aux1, aux2));
    }
  }

  return 0;
}
