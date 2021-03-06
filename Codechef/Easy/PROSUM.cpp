/*
* AUTHOR: Ganesh S Kudva
* https://www.codechef.com/problems/PROSUM
*/

#pragma warning(disable:4786)
#pragma warning(disable:4996)
#include<list>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;
 
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()
#define IN(A, B, C)  ((B) <= (A) && (A) <= (C))
 
typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;
typedef vector<PII > VP;
 
#define AIN(A, B, C) assert(IN(A, B, C))
 
//typedef int LL;
typedef long long int LL;
//typedef __int64 LL;
 
int main()
{
	int T, ks;
	int n, a, i;
	LL ans, cnt[4];
 
	scanf("%d", &T);
	FORAB(ks, 1, T)
	{
		scanf("%d", &n);
		CLR(cnt);
 
		FORN(i, n)
		{
			scanf("%d", &a);
			if(a <= 2) cnt[a]++;
			else cnt[3]++;
		}
 
		// cnt[i] = number of i for 0 <= i <= 2
		// cnt[3] = number of i for i > 2
		// if minimum of the pair is less than 2 then no pair possible
		// if 2, then the other have to be bigger than 2
		// for others any pair possible.
 
		ans = (cnt[3] * (cnt[3] - 1)) / 2 + cnt[2] * cnt[3];
		printf("%lld\n", ans);
	}
 
	return 0;
}
 
