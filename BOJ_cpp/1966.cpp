#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
 
using namespace std;
 
int testcase;
int n,m;
queue<pair<int,int> >q;
priority_queue<int>pq;
void print(){
    int cnt=0;
    while(1){    
        while(1){
            if(q.front().first < pq.top()){
                q.push(make_pair(q.front().first,q.front().second));
                q.pop();
            }
            else break;
        }
        if(q.front().second==m){
            cnt++; break;
        }
        else{
            cnt++;q.pop();pq.pop();
        }
 
    }
    cout<<cnt<<"\n";
}
int main(){
    cin>>testcase;
    while(testcase--){
        cin>>n>>m;
        for(int i=0;i<n;i++) {
            int temp;cin>>temp;
            q.push(make_pair(temp,i));
            pq.push(temp);
        }
        print();
        while(!pq.empty() ) pq.pop();
        while(!q.empty() ) q.pop();
    }
}