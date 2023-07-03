#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float

const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;



int main(){
   int n; cin >> n;
   stack<int>st;
   int depthsem, depth, posde, maxlen, poslen, lensem;
   depthsem= depth= posde= maxlen =lensem =poslen = 0;
   int arr[n];

   for(int i=0; i < n; i++){
      cin >> arr[i];

   }
   
   

   for(int i=0; i < n; i++){
      if(arr[i] == 1){
         depthsem++;

         if(depthsem > depth){
            depth = depthsem;
            posde = i;
         }
      }
      else if(arr[i] == 2){
         if(depthsem > 0) depthsem--;
      }
      if(depthsem != 0){
         lensem++;
      }
      if(depthsem == 0){
         if(lensem > maxlen){
            maxlen = lensem;
            poslen = i - lensem;
         }
         lensem = 0;

      }
      //cout <<"ddsds" <<depth << " " << posde << " " << maxlen <<" "<< poslen << endl;
   }
   cout<< depth << " " << posde+1 << " " << maxlen+1 <<" "<< poslen+1 << endl;



}