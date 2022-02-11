int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int sum=0;
    int days;
    int zero=0;
    if(m1==m2 && y1==y2)
    {
        if(d1>d2)
        {
            days=15*(d1-d2);
            return days;
            //sum=15*days;
            //cout<<sum;
        }
    }
    else if(y1==y2)
    {
        if(m1>m2)
        {
            sum=500*(m1-m2);
            return sum;
        }
    }
    else if(y1>y2)
    {
        sum=10000;
        return sum;
    }
    else if(d1==d2 && m1==m2&& y1==y2)
    {
        return zero;
    }
return 0;
}
