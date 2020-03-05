class Solution {
public:
    string reverseVowels(string s) {
        //ÔªÒô×ÖÄ¸a¡¢e¡¢i¡¢o¡¢u
        map<char,int> m;
        m['a']=1;m['e']=1;m['i']=1;m['o']=1;m['u']=1;
        m['A']=1;m['E']=1;m['I']=1;m['U']=1;m['O']=1;
        int i=0;
        int j=s.size()-1;
        char c;
        while(i<=j)
        {
            if(m[s[i]]==1&&m[s[j]]==1)
            {
                c=s[i];
                s[i]=s[j];
                s[j]=c;
                i++;
                j--;
            }
            else if(m[s[i]]==1)
            {
                j--;
            }
            else if(m[s[j]]==1)
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};
