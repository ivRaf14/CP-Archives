#include <bits/stdc++.h>

#define ll long long 
#define N 100010
using namespace std;

ll v[N];
	
int main(){ 

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
	deque<int>arr;
	
	int n; cin >> n;
	for(int i= 0; i < n; i++){
		int a; cin >> a;
		arr.push_front(a);
	}
	
	for(int i=0; i < n; i++){
		cout << arr[i];
	}
	cout << endl;
	stack < int > s;
	int total = 0; 
  	int top = 1;
  	int barisan = 1;
  	
  /* push the first element to stack */
  s.push(arr[0]); 
  
  // iterate for rest of the elements 
  for (int i = 1; i < n; i++) { 
  	top++;barisan++;
  	
    if (s.empty()) { 
      s.push(arr[i]); 
      continue; 
    } 
  
    /* if stack is not empty, then 
       pop an element from stack. 
       If the popped element is smaller 
       than next, then 
    a) print the pair 
    b) keep popping while elements are 
    smaller and stack is not empty */
    while (s.empty() == false && s.top() < arr[i]) 
    {    
		cout << "topnya " << top<< endl;
        cout << s.top() << " --> " << arr[i] << endl;
		cout << top-1 - i<< endl;  
        s.pop();
        top--;
		 
    } 
  
    /* push next to stack so that we can find 
    next greater for it */
    s.push(arr[i]);
    top = barisan;
	 
  } 
  
  /* After iterating over the loop, the remaining 
  elements in stack do not have the next greater 
  element, so print -1 for them */
  while (s.empty() == false) { 
    cout << s.top() << " --> " << -1 << endl; 
    s.pop(); 
  } 

	
	


  
 
}
