using namespace std;
#include<algorithm>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<map>

#include<climits>
#include<cstring>
#include<cstdio>
#include<cmath>

#define For(i,a) for(int i=0;i<a;++i)
#define foreach(x,v) for(typeof (v).begin() x = (v).begin(); x!= (v).end(); x++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define D(x) cout<< #x " = "<<(x)<<endl
#define Dbg if(1)
#define MP 101

int g[MP][MP];

int main(){
  int u,v,w;
  int numcas;cin>>numcas;
  for(int cid=1;cid<=numcas;++cid){
	int n,m;scanf("%d%d",&n,&m);
	memset(g,0,sizeof(g));
	for(int i=0;i<m;++i){
		scanf("%d%d%d",&u,&v,&w);
		g[u][v] = w;
		g[v][u] = w;
	}
    cout<<"Case "<<cid<<": "<<endl;
  }
  return 0;
}