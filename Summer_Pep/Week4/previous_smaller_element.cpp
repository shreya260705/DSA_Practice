class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int>st;
        int n=arr.size();
        vector<int>nge(n);
        for(int i=0;i<n;i++){
            while(!st.empty()&&st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i]=-1;
            }
            else{
                nge[i]=st.top();
            }
            st.push(arr[i]);
        }
        return nge;
    }
    
};