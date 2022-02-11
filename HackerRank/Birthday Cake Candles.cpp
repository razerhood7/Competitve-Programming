int birthdayCakeCandles(int candles_count, int* candles) {
    long int max=0,max1=0;
for(int i=0;i<candles_count;i++)
{
    if(max<candles[i])
       max=candles[i]; 
} 
       for(int i=0;i<candles_count;i++){
    if(candles[i]==max)
    max1++;
       }

return max1;
}
