int sqrt_babylonian(int y) {
    int z;
    if (y > 3) {
        z     = y;
        int x = y / 2 + 1;
        while (x < z) {
            z = x;
            x = (y / x + x) / 2;
        }
    } else if (y != 0) {
        z = 1;
    }
    return z;
}
