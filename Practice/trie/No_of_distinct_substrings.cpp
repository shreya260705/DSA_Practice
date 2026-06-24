// Number of Distinct Substrings in a String Using Trie


// 1

// Problem Description: Implement a program that takes a string 'S' as input and returns the number of distinct substrings of the given string, including the empty substring. Use a trie data structure to accomplish this.

// Note:
// 1. A string ‘B’ is considered a substring of a string ‘A’ if ‘B’ can be obtained by deleting zero or more characters from the start and end of ‘A’.
// 2. Two strings ‘X’ and ‘Y’ are considered different if either their length is different or there is at least one index ‘i’ such that the character of ‘X’ at index ‘i’ is different from the character of ‘Y’ at index ‘i’ (i.e., X[i] != Y[i]).

// Examples


#include<iostream>
#include<string>
class Node{
    public:
     Node* child[26];
     Node(){
     for(int i=0;i<26;i++){
        child[i]=NULL;
     }
    }
};
class Trie{
    public:
    Node* root;
    Trie(){
        root= new Node();
    }
    int countDistinctSubstrings(string &s) {
        int cnt = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {

            Node* curr = root;

            for (int j = i; j < n; j++) {

                int idx = s[j] - 'a';

                if (curr->child[idx] == NULL) {
                    curr->child[idx] = new Node();
                    cnt++;
                }

                curr = curr->child[idx];
            }
        }
        return cnt + 1; 
    }
};
