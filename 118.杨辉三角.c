
int** generate(int numRows,int** ColumnSizes){
    int i,j;
    int** triangle = malloc(numRows*sizeof(int*));
    *ColumnSizes=malloc(numRows*sizeof(int*));
    for(i=0;i<numRows;i++)
    {
        int num=i+1;
        (*ColumnSizes)=num;
        triangle[i][0]=1;
        triangle[i][num-1]=1;
        for(j=1;j<=num;j++)
        {
            triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
        }
    }
    return triangle;
}
