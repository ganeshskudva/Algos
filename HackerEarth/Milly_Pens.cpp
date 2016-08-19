/*
* AUTHOR: Ganesh S Kudva
* https://www.hackerearth.com/problem/algorithm/milly-and-pens/
*/

#include <bits/stdc++.h>

typedef long long int ull;

#define MEM(a, b, c, d) memset(a, (b), c * sizeof(d))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()

#if 0
typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;
#endif

#define IN(A, B, C) assert( B <= A && A <= C)

using namespace std;

#define DEBUG 0
#define CLOCK 0

int main()
{
#if CLOCK
	clock_t tStart = clock();
#endif
	ull t = 0,i,j, n, p, m, cnt, val;
	set <ull> unique;
#if DEBUG 
	srand((unsigned)time(0));
	t = (rand()%10)+1; 
	cout <<t<<endl;
#else 
	cin >> t;
#endif 

	while (t--)
	{
		cnt = 0;
		cin >> n >> p >> m;

		FORN(i, p)
		{
			cin >> val;
			if (unique.count(val) == 0)
			{
				cnt++;
			}
			unique.insert(val);
		}

		FORN(i, m)
		{
			cin >> val;
			if (unique.count(val) == 0)
			{
				cnt++;
			}
			unique.insert(val);
		}

		if (cnt >= n)
		{
			cout << "They can" << endl;
		}
		else
		{
			cout << "They can't" << endl;
		}
		unique.clear();
	}


#if CLOCK
	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#endif
	return 0;
}
