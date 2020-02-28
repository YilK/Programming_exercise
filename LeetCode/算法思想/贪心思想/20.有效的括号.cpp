class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                t.push(s[i]);
            else
            {
                if(t.empty()==true)
                    return false;
                else{
                    char c=t.top();//取值要利用top(),不能用pop() 
                    t.pop();
                    if(c=='('&&s[i]!=')')
                        return false;
                    else if(c=='['&&s[i]!=']')
                        return false;
                    else if(c=='{'&&s[i]!='}')
                        return false;
                } 
            }
        }
        return t.empty();   
    }
};
//括号匹配的问题要利用栈来解决 
