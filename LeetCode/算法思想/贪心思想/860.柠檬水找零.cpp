class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a[11]={0};
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                a[5]++;
            else if(bills[i]==10)
            {
                a[5]--;
                a[10]++;
                if(a[5]<0)
                    return false;
            }
            else if(bills[i]==20)
            {
                int temp=15;
                if(a[10])
                {
                    a[10]--;
                    temp=temp-10;
                }
                while(temp!=0)
                {
                    a[5]--;
                    temp=temp-5;
                }
                if(a[5]<0)
                    return false;
            }
        }
    return true;
    }
};
