int viralAdvertising(int n) {
    int i,shared=5,like=0,cumu=0;
for(i=1;i<=n;i++)
{
    like=shared/2;
    cumu+=like;
    shared=like*3;
}
return cumu;
}
