// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    int i,sum=0,div=0;
    for(i=0;i<bill.size();i++)
    {
        sum+=bill[i];
    }
    sum=sum-bill[k];
    div=(sum)/2;
    if(div==b){
        cout<<"Bon Appetit";
    }
    else {
     div=b-div;
     cout<<div;
    }
}
