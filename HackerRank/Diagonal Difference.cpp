/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1=0,sum2=0,sum;
    
    for(int i=0;i<arr_rows;i++)
    {
        for(int j=0;j<arr_columns;j++){
        if(i==j)
            sum1+=arr[i][j];
        }
    }
        for(int i=0;i<arr_rows;i++)
    {
        for(int j=0;j<arr_columns;j++)
          if(i+j==arr_columns-1)
          sum2+=arr[i][j];
    }
      sum= abs(sum1-sum2);
      return sum;

}
