class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        // stack<int>s;
        // while(!q.empty()){
        //     s.push(q.front());
        //     q.pop();
        // }
        // while(!s.empty()){
        //     q.push(s.top());
        //     s.pop();
        // }
        
        if(q.empty()) return ;
        int x=q.front();
        q.pop();
        reverseQueue(q);
        
        q.push(x);
    
    }
};