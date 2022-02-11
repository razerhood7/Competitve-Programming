int saveThePrisoner(int n, int m, int s) {
    int i,cn=0,mn=0;
    if(m+s-1<=n)
        return s+m-1;
    m=m-(n-s+1);
    s=1;
    if (m%n==0)
        return n;
    else return m%n;
    
    
}
