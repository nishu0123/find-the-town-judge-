class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       
        if(n == 1)
        {
            return 1;
        }
        unordered_map<int , int > map;
        int m = trust.size();
        int i;
        for(i=0;i<m; i++)
        {
           map[trust[i][1]]++;
        }
        for(auto itr:map)
        {
            if(itr.second == n-1)
            {
               // bool flag = false;
                for(i=0; i<m; i++)
                {
                    if(trust[i][0] == itr.first)
                    {
                        return -1;
                    }
                }
                return itr.first;
                
            }
        }
        return -1;
        
    }
};
