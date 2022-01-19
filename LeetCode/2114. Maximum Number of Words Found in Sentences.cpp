class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int n=sentences.size();
        int ans=0;
        int count;
        for(int i=0;i<n;i++)
        {
            int k=sentences[i].length();
            count=1;
            
            for(int j=0;j<k;j++)
            {
                if(sentences[i][j]==' ')
                    count++;
            }
            
            ans=max(ans,count);
        }
        
        return ans;
    }
};
