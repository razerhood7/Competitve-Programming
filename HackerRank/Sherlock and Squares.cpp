int squares(int a, int b) 
{
    int i,square,count=0;;
for(i=sqrt(a);i<=sqrt(b);i++)
{
    square=i*i;
    if(a<=square && square<=b)
    {
        count++;
    }
}
return count;

}
