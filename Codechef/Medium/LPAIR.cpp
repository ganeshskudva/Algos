#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
#define MAXN 100000
#define AIN(a,b,c) assert(a<=b && b<=c);

typedef long long i64;
typedef pair<int,int> pii;
int tmp[MAXN];
pii p[MAXN];

i64 countingInverse(int l,int r){
    if(l>=r) return 0;
    if(l+1==r){
        if(p[l].second>p[r].second){
            swap(p[l],p[r]);
            return 1;
        }
        return 0;
    }
    int mid = (l+r) / 2,i,j,k;
    i64 ret=countingInverse(l,mid) + countingInverse(mid+1,r);
    for(i = l, j = mid+1, k =l;i<=mid && j<=r;){
        if(p[i].second>p[j].second){
            tmp[k++] = p[j++].second;
            ret+= mid - i + 1;
        }
        else
            tmp[k++] = p[i++].second;
    }
    while(i<=mid)
        tmp[k++] = p[i++].second;
    while(j<=r)
        tmp[k++] = p[j++].second;
    for(;l<=r;l++) p[l].second = tmp[l];
    return ret;
}
int main(){
    int t,i,j,k,m,n,x,y;

    scanf("%d",&n);
    AIN(1,n,MAXN);
    for(i = 0;i<n;i++){
        scanf("%d %d",&p[i].first,&p[i].second);
        AIN(0,p[i].first,MAX);
        AIN(0,p[i].second,MAX);
    }
    sort(p,p+n); //sort according to ascending order of Male position
    printf("%lld\n",countingInverse(0,n-1));  // calculate the counting inversion of Female positions

    return 0;
}
