#include<iostream>
class Node{
    public:
    Node* child[2];
    Node(){
        child[0]=child[1]=NULL;
    }
};


class Solution {
public:
    Node*root;
    Solution(){
        root=new Node();
    }
    void insert(int nums){
        Node* curr=root;
        for(int i=31;i>=0;i--){
            int bit=(nums>>i)&1;
            if(curr->child[bit]==NULL){
                curr->child[bit]=new Node();
            }   
            curr=curr->child[bit];  
       }

    }
    int getMax(int nums) {
       Node* curr=root;
       int ans=0;
       for(int i=31;i>=0;i--){
           int bit=(nums>>i)&1;
           if(curr->child[1-bit]){
            ans|=(1<<i);
            curr=curr->child[1-bit];
           }
           else{
            curr=curr->child[bit];
           }
       }
       return ans;
    }
    int findMaximumXOR(vector<int>& nums) {

        for(int x:nums)
            insert(x);

        int maxi=0;

        for(int x:nums)
            maxi=max(maxi,getMax(x));

        return maxi;
    }
};

