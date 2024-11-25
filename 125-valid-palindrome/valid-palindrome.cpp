
string trim(string s){
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=' ' && isalnum(s[i]) )
        {
            str += s[i];
        }
    }
        return str;
    }

string Lower(string s){
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
         str += tolower(s[i]);
        
    }
        return str;
    }


class Solution {
public:
    bool isPalindrome(string s) {
        
        stack<char> stack;

        s = trim(s);
        s = Lower(s);
        
        if(s.length() == 0 ){
            return true;
        }

        // push whole string into stack 

        for (int i = 0; i < s.length(); i++)
        {
            stack.push(s[i]);
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (stack.top() != s[i])
            {
                return false;
            }            
            stack.pop();
        }
                return true;
    }
};


