// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
    
while (1) {
x1=x1+v1;
x2=x2+v2;
if(x1 == x2)
{
    return "YES";
}
else if(x1 > 1000000000 || x2 >1000000000)
{
    return "NO";
}
}


}
