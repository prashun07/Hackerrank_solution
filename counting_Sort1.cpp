
int main() 
{
    int a[1000000];
    int i,n,j,count;
    cin>>n;
    for(i=0;i<n; i++ )
        cin>>a[i];
    for(i=0;i<100;i++)
        {
         count=0;
         for(j=0;j<n;j++)
             {
             if(i==a[j])  
                count++;
             }
         cout<<count<<" ";
         }
       
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
