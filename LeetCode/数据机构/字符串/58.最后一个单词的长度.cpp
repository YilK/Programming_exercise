class Solution {
public:
    int lengthOfLastWord(string s) {
        int num=0;
        int m=s.size();
        int i=m-1;
        while(s[i]==' ')//ע��ĩβ���ǿո����� ��Ҫ��ȥĩβ�Ŀո�
            i--;
        while(i>=0)//��ĩβ��ʼ��
        {
            if(isalpha(s[i]))
            {
                num++;
                i--;
            }
            else
                break;
        }
        return num;
    }
};
