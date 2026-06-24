// Problem Statement: Implement "TRIE” data structure from scratch with the following functions.

// Trie(): Initialize the object of this “TRIE” data structure.
// insert(“WORD”): Insert the string “WORD” into this “TRIE” data structure.
// countWordsEqualTo(“WORD”): Return how many times this “WORD” is present in this “TRIE”.
// countWordsStartingWith(“PREFIX”): Return how many words are there in this “TRIE” that have the string “PREFIX” as a prefix.
// erase(“WORD”): Delete one occurrence of the string “WORD” from the “TRIE”.


#include<iostream>
class Node{
    public:
    Node* child[26];
    int cntprefix;
    int cntendwith;
    Node(){
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
        cntprefix=0;
        cntendwith=0;
    }
};
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(string word){
        Node*curr=root;
        for(char ch:word){
            int idx=ch-'a';
            if(curr->child[idx]==NULL){
                curr->child[idx]=new Node();
            }
            curr=curr->child[idx];
            curr->cntprefix++;
        }
        
        curr->cntendwith++;

    }
     int countWordsEqualTo(string word){
        Node* curr=root;
        for(char ch:word){
            int idx=ch-'a';
            if(curr->child[idx]==NULL){
                return 0;
            }
            curr=curr->child[idx];
        
        }
        return curr->cntendwith;
     }
     int countWordsStartingWith(string word){
         Node* curr=root;
        for(char ch:word){
            int idx=ch-'a';
            if(curr->child[idx]==NULL){
                return 0;
            }
        
            curr=curr->child[idx];
        }
        return curr->cntprefix;
     }
     void erase(string word){
        Node* curr=root;
        for(char ch:word){
            int idx=ch-'a';
            if(curr->child[idx]==NULL)
            return;
            curr=curr->child[idx];
            curr->cntprefix--;
        }
        curr->cntendwith--;
     }
    
};

