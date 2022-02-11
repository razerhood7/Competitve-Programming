// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
int count=0,mount=0;
count=z-y;
count=abs(count);
mount=z-x;
mount=abs(mount);
if(count>mount)
{
    return "Cat A";
}
else if(mount>count)
{
    return "Cat B";
}
else if(count== mount)
{
    return "Mouse C";
}
return 0;
}
