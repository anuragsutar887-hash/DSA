int addDigits(int num) {
    int  sum,rem;
    while(num>=10){
        sum=0;
    
    while(num>0){
        rem=num%10;
        sum+=rem;
        num/=10;    
    }
        num=sum;
    }
    
    return sum;
}