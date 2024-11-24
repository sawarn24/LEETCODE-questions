bool isPalindrome(int x) {
    long long original_num=x,lastdigit,reverse=0;
    if(x<0)
     return false;
    while(x!=0)
    { lastdigit=x%10;
      reverse=reverse*10+lastdigit;
      x=x/10;

    }
   return reverse==original_num;
     
    }