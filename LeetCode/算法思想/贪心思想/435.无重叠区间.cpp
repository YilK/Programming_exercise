class Solution {
public:
    static bool compare(vector<int> a,vector<int> b)
    {
        return a[1]<=b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //找到所要移除区间的最小个数
        //那么就是要算出这个区间的最多的个数
        //实际上就是一个区间贪心
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
//思想就是贪心思想 
// 要移除的个数最少，那么就是要符合区间的个数最多，那么，后面那位要越小越好； 
