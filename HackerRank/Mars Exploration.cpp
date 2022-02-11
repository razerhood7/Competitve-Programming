int marsExploration(string s) {
    int i,count=0;
    string m=
"SOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOS";
for(i=0;i<s.size();i++)
{
    if(s[i]!=m[i])
    {
        count++;
    }
}
return count;
}
