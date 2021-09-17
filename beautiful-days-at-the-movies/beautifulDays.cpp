// Helper func to reverse an integer n (ex: 12 -> 21)
int reverseNumber(int n) {
    int reverse = 0;
    while ( n > 0) {
        int lastDigit = n % 10;
        reverse = (reverse*10) + lastDigit;
        n /= 10;
    }
    return reverse;
}

int beautifulDays(int i, int j, int k) {
    int result = 0;
    for (; i <= j; i++) {
        if ((i - reverseNumber(i)) % k == 0) {
            result++;
        }
    }
    return result;
}
