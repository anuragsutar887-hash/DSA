int mySqrt(int x) {
    if(x<2){
        return x;
    }
    long left=1,right=x/2,mid;
    while(left<=right){
        mid=(left+right)/2;
        long sq=mid*mid;
    
    if(sq==x){
        return mid;
    }
    else if(sq<x){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
    }
return right;
}