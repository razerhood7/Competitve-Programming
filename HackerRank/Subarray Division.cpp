// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {
    int count = 0;
        for(int i=0;i<s.size();i++)
        {
            int sum = s[i];
            int runner = m-1;
            for(int j=i+1;runner!=0;j++)
            {
                sum+=s[j];
                runner--;
            }
            if(sum==d)
                count++;
        }
        return count;

}
