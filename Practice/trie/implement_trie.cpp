
class TrieNode {
public:
    TrieNode* child[26];
    bool eow; 

    TrieNode() {
        for (int i = 0; i < 26; i++) {
            child[i] = NULL;
        }
        eow = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* curr = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (curr->child[idx]==NULL) {
                curr->child[idx] = new TrieNode();
            }
            curr = curr->child[idx];
        }
        curr->eow = true;
    }

    bool search(string word) {
        TrieNode* curr = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (curr->child[idx]==NULL)
                return false;
            curr = curr->child[idx];
        }
        return curr->eow;
    }

    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for (char ch : prefix) {
            int idx = ch - 'a';
            if (curr->child[idx]==NULL)
                return false;
            curr = curr->child[idx];
        }
        return true;
    }
};