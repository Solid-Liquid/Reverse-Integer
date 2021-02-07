

int reverse(int x){
    int rev=0, tmp, max=INT_MAX/10, min=INT_MIN/10;
    
    while(x != 0){
        tmp = x % 10;
        
        if (rev > max || (rev == max && tmp > 7)) return 0;   //check upper bounds
        if (rev < min || (rev == min && tmp < -8)) return 0;  //check lower bounds
            
        rev = rev * 10 + tmp;
        x /= 10;
    }
    
    return rev;
}