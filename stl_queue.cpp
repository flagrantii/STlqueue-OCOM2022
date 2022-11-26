#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x;
    char cmd;
    cin>>n;
    while(n--) {
        queue<int> q;
        cin>>m;
        while(m--) {
            cin>>cmd;
            if(cmd=='a'){
                cin>>x;
                q.push(x);
            }
            if(cmd=='b'){
                if(!q.empty()){
                    cout<<q.front()<<" ";
                    q.pop();
                }else{
                    cout<<-1<<" ";
                }
            }
            if(cmd=='c'){
                cout<<q.size()<<" ";
            }
            if(cmd=='d'){
                if(!q.empty()){
                	cout<<q.front()<<" ";
				}
                else cout<<-1;
            }
            if(cmd=='e'){
                if(!q.empty()){
                	 cout<<q.back()<<" ";	
				}
                else cout<<-1;
            }
        }
    }
}
