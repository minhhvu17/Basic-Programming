int power(int x, int n){
    if (n == 0){
        return 1;
    }else if (n == 1){
        return x;
    }else{
        return x * power(x, n-1);
    }
}