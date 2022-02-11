int utopianTree(int n) {
    int i,height=1;
    for(i=1;i<=n;i++)
    {
       if(i%2){
           height=height*2;
       } 
       else{
           height++;
       }
    }
    return height;
}
