class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";//һ��ʼûд���ûͨ��
        string s;
        int min=strs[0].size();
        for(int i=1;i<strs.size();i++)
            if(min>strs[i].size())
                min=strs[i].size();
        //�ҵ���С�ĳ���
        int j=0;
        while(j<min)
        {
            char a=strs[0][j];//��¼��һ���ַ���Ȼ�����ÿһ���ַ����ĵ�һ���ַ�
            for(int i=0;i<strs.size();i++)
            {
                if(strs[i][j]!=a)
                {
                    return s;
                }
            }
            s=s+a;
            j++;
        }
        return s;
    }
};
