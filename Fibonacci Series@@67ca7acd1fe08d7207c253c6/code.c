void fibonacciSeries(int n)
{
    int i,a=0,b=1,c=0;
    for(i=1;i<=n;i=i+1)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
