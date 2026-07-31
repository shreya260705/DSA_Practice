// The Galactic Signal Validator
// In the year 3045, Earth receives various numeric transmissions from deep space. These
// signals are encoded as strings, and your task is to determine if a transmission represent
// a valid "Galactic Number."
// A Galactic Number follows strict formatting rules:
// It can be an integer or a decimal, optionally followed by an exponent.
// An integer starts with an optional '+' or '-' sign, followed by one or more digits.
// A decimal starts with an optional '+' or '-' sign, and must contain a dot '.' in one of these
// formats:
// Digits followed by a dot (e.g.,
// Digits, a dot, then more digits (e.g., "3.14")
// A dot followed by digits (e.g., ".9")
// An exponent starts with 'e' or 'E', followed by a valid integer.
// Write a validator to confirm if a string s is a valid Galactic Number.
// Example 1
// true
// The number "O" is a simple integer with no sign or exponent, which is valid.

class Solution {
public:
    bool isGalacticNumber(string s) {
        // add your code here 
        bool d=false;
        bool o=false;
        bool e=false;
         for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isdigit(c)){
                d=true; 
            }
            else if(c=='+' ||c=='-'){
                if(i!=0&&s[i-1]!='e' &&s[i-1]!='E') return false;
            }
            else if(c=='.'){
                if(o||e){
                    return false;
                }
                o=true;
            }
            else if(c=='e'||c=='E'){
                if(e||!d){
                    return false;
                }
                e=true;
                d=false;
            }
            else{
                return false;
            }
         }
         return d;
    }
};