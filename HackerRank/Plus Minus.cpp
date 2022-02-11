// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) {
     float pos1,neg1,zer1;
     float pos=0,neg=0,zer=0;
for(int i=0;i<arr_count;i++){
    if(arr[i]>0){
        pos++;
    }
    else if(arr[i]<0){
        neg++;
    }
    else if(arr[i]==0)
    {
        zer++;
    }
     pos1= pos/arr_count;
     neg1= neg/arr_count;
     zer1= zer/arr_count;
    
}
printf("%f\n",pos1);
    printf("%f\n",neg1);
    printf("%f\n",zer1);

}
