#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

struct point
{
	int x, y;
};

point piv;

int phty(point a, point b){
	return pow((b.x-a.x),2) + pow((b.y-a.y), 2);
	//return pow(a.x-b.x, 2) + pow(a.y-b.y,2);
}

int direc(point a, point b, point c){
	int res = (b.x - a.x) * (c.y - b.y) - (b.y - a.y) * (c.x-b.x);
	if(res == 0) return 0;
	return (res > 0 ? 1 : -1);
	// 1 ccw; -1 cw; 0 liniar 
}

bool cmp(point a, point b){
	return (a.x < b.x || (a.x == b.x && a.y < b.y));
}

bool cmp2(point a, point b){
	int dir = direc(piv, a, b);

	if(dir == 0) return phty(piv, a) > phty(piv, b);
	else return dir > 0; //cw
}
 
vector<point> graham_scan(vector<point> &vec){
	// sort leftmost
	sort(vec.begin(), vec.end(), cmp);

	piv = vec[0];

	sort(vec.begin() + 1, vec.end(), cmp2);
	 // cout << "nnini ";
	 // for(auto it : vec)cout << it.x << " " << it.y << endl;

	stack<int>st;

	for(int i=0; i < vec.size(); i++){
		while(st.size() >= 2){
			int temp = st.top();
			st.pop();
			int undtop = st.top();
			st.push(temp);

			if(direc(vec[undtop], vec[temp], vec[i]) <= 0) st.pop();
			else break;
		}
		st.push(i);
	}
	vector<point> res;

	while(!st.empty()){
		res.pb({vec[st.top()].x, vec[st.top()].y});
		st.pop();
	}
	return res;
   


}


 
 
signed main(){
   BOOST
   int n;
   while(cin >> n){
   	if(n != 0){
   		set<pair<int,int>>st;
   		vector<point> v;

   		for(int i=0; i < n; i++){
   			int a, b; cin >> a >> b;
   			st.insert({a,b});
   		}
   		for(auto it : st){
   			v.pb({it.fi, it.se});
   		}

   		if(v.size() < 3){
   			cout << v.size() << endl;
   			for(auto it : v){
   				cout << it.x  <<" " << it.y << endl;
   			}
   		}
   		else{
   			vector<point> hull = graham_scan(v);
   			reverse(hull.begin(), hull.end());
   			cout << hull.size() << endl;
   			for(auto it : hull){
   				cout << it.x << " " << it.y << endl;
   			}
   		}



   	}
   	else break;
   }
}
   
 
  