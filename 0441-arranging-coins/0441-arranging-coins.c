int arrangeCoins(int n) {
    int res=0;
    int i;

    for( i=1;n>0;i++)
    {  if(n>=i)
      {  res+=i;
         n-=i;
      }
       else {
           break;
      }

    }
    return i-1;

    
}