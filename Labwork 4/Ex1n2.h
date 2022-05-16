int gcd(int a, int b){
    while (1){
        if (a > b){
            a = a - b;
        }
        else if (a < b){
            b = b - a;
        }
        else if (a == b){
            return a;
            break;
        }
    }
}