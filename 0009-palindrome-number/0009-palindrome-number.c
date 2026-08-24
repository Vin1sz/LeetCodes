bool isPalindrome(int x) {
    long y = 0;
    int xinicial = x;

    while(x > 0) {
        int ultimodigito = x % 10;

        y = y * 10 + ultimodigito;
        x = x/10;
    }
    return (y == xinicial);
}