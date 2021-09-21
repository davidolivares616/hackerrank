long strangeCounter(long t) {
    long remainder = 3;
    while (t > remainder) {
        t = t-remainder;
        remainder *= 2;
    }
    return (remainder - t) + 1;
}
