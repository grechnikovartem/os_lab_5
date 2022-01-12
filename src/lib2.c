float Square(float a, float b){
    return a * b / 2;
}

int GCF(int x, int y){
    if(x > y){ int tmp = x; x = y; y = tmp; }
    for(int i = x; i > 1 ; i--){
        if(x % i == 0 && y % i == 0)
            return i;
    }
    return 1;
}
