#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int T, N, M;
  int i,j,k;
  int a,b,aa,bb,c;

  int mn[51], mx[51];

  /* calculate the minimal and maximal total length for each N */
  mn[0] = mx[0] = 0;
  REP(i,1,51){
    k = i / 2;
    mn[i] = mn[k] + mn[i-k-1] + i+1;
    mx[i] = mx[i-1] + mx[0] + i+1;
  }

  assert(scanf("%d",&T) == 1);
  assert(1<=T && T<=10);
  while(T--){
    assert(scanf("%d%d",&N,&M)==2);
    assert(1<=N && N<=50 && 1<=M && M<=2000);
    if(M < mn[N])       puts("-1");
    else if(M <= mx[N]) puts("0");
    else                printf("%d\n",M-mx[N]);
  }

  return 0;
}
