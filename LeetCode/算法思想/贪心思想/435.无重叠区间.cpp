class Solution {
public:
    static bool compare(vector<int> a,vector<int> b)
    {
        return a[1]<=b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //�ҵ���Ҫ�Ƴ��������С����
        //��ô����Ҫ��������������ĸ���
        //ʵ���Ͼ���һ������̰��
        int num=0;
        int currentime=-100000;
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=0;i<intervals.size();i++)
        {
            if(currentime<=intervals[i][0])
            {
                currentime=intervals[i][1];
            }
            else 
                num++;
        }
        return num;
    
    }
};
//˼�����̰��˼�� 
// Ҫ�Ƴ��ĸ������٣���ô����Ҫ��������ĸ�����࣬��ô��������λҪԽСԽ�ã� 
