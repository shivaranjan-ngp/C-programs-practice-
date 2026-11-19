#include<stdio.h>
void matrix(int a,int b,int m[a][b] )
{
printf("enter  the element into the given index value\n");
for (int i=0;i<a;i++)
{

    for(int j=0;j<b;j++)
    {
        // here the i+1 and j+1 are being printed so that 
        // the user gets a more clear information abt which row and colum their 
        // entering their value
      printf("%d row %d column ",i+1,j+1);
      scanf("%d",&m[i][j]);
    }
}

}

void mat_read(int a,int b,int m[a][b] )
{
    printf("the matrix is given by\n");
for (int i=0;i<a;i++)
{

    for(int j=0;j<b;j++)
    {
      printf("%d ",m[i][j] );
    }
    printf("\n");
}
}

void sum_row_column(int a,int b,int m[a][b])
{
    // row sum

    for (int i=0;i<a;i++)
    {
      int sum1=0;
      for(int j=0;j<b;j++)
      {
        sum1+=m[i][j];
      }
      printf("the sum of row %d is %d\n",i+1,sum1);
    }
    // columns 
    for (int i=0;i<b;i++)
    {
      int sum2=0;
      for(int j=0;j<a;j++)
      {
        sum2+=m[j][i];
      }
      printf("the sum of column %d is %d\n",i+1,sum2);
    }

}
void transpose(int a,int b,int m[a][b])
{
int m1[b][a];
for(int i=0;i<b;i++)
{
    for(int j=0;j<a;j++)
    {
        m1[i][j]=m[j][i];
    }
}
printf("the transpose of the matrix is given by\n");
mat_read(b,a,m1);
}
int main()
{
    int a,b;
    printf("enter the number of rows and columns");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
   {
     int m[a][b];
    matrix(a,b,m);
    mat_read(a,b,m);
    sum_row_column(a,b,m);
    transpose(a,b,m);
   }

   else 
   {
    printf("enter the rows and column as non negative and non zero");
   }
    
}
