int hurdleRace(int k, vector<int> height) {
    int i,value=0;
for(i=0;i<height.size();i++)
{
    value=*max_element(height.begin(),height.end());
}
if(k<value)
{
    value=value-k;
    return value;
}
else {
    return 0;
}

}
