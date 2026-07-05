class Solution {
public:
    int largestRectangleArea(vector<int>& histo) {
        stack<int> st;
        int maxA=0,n=histo.size();
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || histo[st.top()]>=histo[i])){
                int height=histo[st.top()];
                st.pop();
                int width;
                if(st.empty()) width=i; 
               else width=i-st.top()-1;
               maxA=max(maxA,width*height);
            }
            st.push(i);
        }       
        return maxA;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxA=0;
        vector<int> psum(m,0);
      for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(matrix[i][j]=='1') psum[j]++;
                else psum[j]=0;
            }
            maxA=max(maxA,largestRectangleArea(psum));
        }
        return maxA;
        
    }
};