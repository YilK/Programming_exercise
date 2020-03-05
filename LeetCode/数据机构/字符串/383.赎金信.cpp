class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<ransomNote.size();i++)
        {
            if(magazine.find(ransomNote[i])==string::npos)
                return false;
            else
            {
                int n=magazine.find(ransomNote[i]);
                magazine.erase(n,1);
            }
        }
        return true;
    }
};
/*find()的用法
erase()的用法
下面这个方法good 
bool canConstruct(string ransomNote, string magazine){
        int hash[26] = {0};
        for(int i = 0;magazine[i];++i){
            hash[magazine[i]-'a'] += 1;
        }
        for(int i = 0;ransomNote[i];++i){
            hash[ransomNote[i]-'a'] -= 1;
            if(hash[ransomNote[i] - 'a'] < 0)return false;
        }
        return true;
    }

*/ 
