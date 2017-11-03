/*
* AUTHOR: Ganesh S Kudva
* https://www.codechef.com/problems/CIELDIST
*/

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int T, Ds, Dt, D, res;
  int sum, mx;
  
  assert( scanf("%d",&T)==1 );
  assert( 1<=T && T<=2013 );
  while(T--){
    assert( scanf("%d%d%d",&Ds,&Dt,&D)==3 );
    assert( 1<=Ds && Ds <= 2013 );
    assert( 1<=Dt && Dt <= 2013 );
    assert( 1<=D  && D  <= 2013 );

    sum = Ds + Dt + D;
    mx = Ds; if(mx < Dt) mx = Dt; if(mx < D) mx = D;

    /* mx = max(Ds, Dt, D), and sum-mx means sum of two short distances */
    res = mx - (sum-mx);
    if(res < 0) res = 0;
    printf("%d\n",res);
  }
  
  return 0;
}
