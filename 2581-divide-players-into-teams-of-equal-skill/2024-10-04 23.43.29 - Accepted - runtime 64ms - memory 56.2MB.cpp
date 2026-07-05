class Solution {
public:
     long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
        int s = skill[0]+skill[n-1];
        long long p=skill[0]*skill[n-1];
        for(int i=1;i<n/2;++i)
        {
            if(skill[i]+skill[n-i-1]!=s) return -1;
            p+=skill[i]*skill[n-i-1];
        }
        return p;
    }
};