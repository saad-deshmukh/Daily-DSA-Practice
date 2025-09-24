/*yo're given a Queue reverse it*/
#include<Queue>
#include<stack>
#include<iostream>
using namespace std;

class Solution{
    public:

    void reverseQ(queue<int>& Q){
        // using stack 

        // stack<int> st ;
        // while(!Q.empty()){
        //     st.push(Q.front());
        //     Q.pop();
        // }
        // while(!st.empty()){
        //     Q.push(st.top());
        //     st.pop();
        // }
       
        // using recursion 

        if (Q.empty()) return ;

        int frontval = Q.front();
        Q.pop();

        reverseQ(Q);
        Q.push(frontval);
    }
    

};
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    Solution s;
    s.reverseQ(q);
    
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop();
    }

}
