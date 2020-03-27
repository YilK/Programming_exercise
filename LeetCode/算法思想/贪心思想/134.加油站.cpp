class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i;
        for(i=0;i<gas.size();i++)
        {
            int j=i;//从每一个点出发
            int remain=gas[i];
            while(remain-cost[j]>=0)
            {
                remain=remain-cost[j]+gas[(j+1)%gas.size()];
                j=(j+1)%gas.size();
                if(j==i)
                    return i;
            }
        }
        return -1;

    }
};
