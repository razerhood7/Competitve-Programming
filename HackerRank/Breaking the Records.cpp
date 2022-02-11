// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    int hc=0,lc=0;
    int scoremax=scores[0],scoremin=scores[0];
    
    vector<int> res;
for(int i=0;i<scores.size();i++)
{
    
    if(scores[i]>scoremax)
    {
        hc++;
        scoremax=scores[i];
    }
    if(scores[i]<scoremin)
    {
        lc++;
        scoremin=scores[i];
    }
}
res.push_back(hc);
res.push_back(lc);
return res;

}
