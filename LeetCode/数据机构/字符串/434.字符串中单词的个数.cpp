class Solution {
public:
    int countSegments(string s) {
        int n=0;
        if(s.size()==0)
            return 0;
        int begin=0;//�ǿո���ַ�
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')//�����ո�
            {
                if(begin>0)//��ǰ���Ƿ����ַ�
                    n++;
                begin=0;//������Ϊ0
            }
            else
            {
                begin++;
            }
        }
        if(begin>0)//�������һ���ַ����ǿո�����
            n++;
        return n;
    }
};
