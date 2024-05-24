
#include "bits/stdc++.h"
using namespace std;


#define endl '\n'

void Excuse_Me(int TC)
{
   int n;
   cin>>n;
   
   vector<int> pos,neg;
   
   while(n--){
        int x;
        cin>>x;
        if(x>=0) pos.push_back(x); //comnsidering 0 to be a pos number
        else neg.push_back(x);
   }   
   
   int turn=1;
   
   int i=0,j=0;
   
   while(i<pos.size() or j<neg.size()){
        if(turn and i<pos.size()){
            cout<<pos[i]<<" ";i++;
        }
        if(turn==0 and j<neg.size()){
            cout<<neg[j]<<" ";j++;
        }
        turn=1-turn;
   }
   
   
   //space complexity O(n) in worst case
   //time complexity O(n) in worst case
   
   //input -1 -2 -3
   //output -1 -2 -3
   
   //input -1 1 -2
   //output 1 -1 -2
   
   

   
   
   
}
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("error.txt","w",stderr);
    int Tc=1;
    // cin>>Tc;
 
    for(int tc=1;tc<=Tc;tc++)
    {
        Excuse_Me(tc);
    }
   
    return 0;
}