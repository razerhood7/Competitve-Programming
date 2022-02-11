int camelcase(string s) {
    int n=s.length(),i;
    int count=1;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z'){
            count++;
        }
    }
    return count;
 
}
