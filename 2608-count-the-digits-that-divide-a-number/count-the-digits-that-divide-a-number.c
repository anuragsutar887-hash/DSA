int countDigits(int num) {
    int digit,count=0,real;
    real=num;
    while(real>0){
        digit=real%10;
        if(num%digit==0){
            count++;
        }
        real/=10;
    }
    return count;
    
}