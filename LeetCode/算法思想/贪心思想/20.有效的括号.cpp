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
                    char c=t.top();//ȡֵҪ����top(),������pop() 
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
//����ƥ�������Ҫ����ջ����� 
