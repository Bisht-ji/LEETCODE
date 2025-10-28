class Solution {
public:
    double bin(double x, long long n) {
        if (n == 0)
            return 1;
        double p = bin(x, n / 2);
        if (n % 2 == 0)
            return p * p;
        else
            return x * p * p;
    }

    double myPow(double x, int n) {
        long long N = n; 
        if (N < 0) {
            N = -N;
            return 1.0 / bin(x, N);
        }
        return bin(x, N);
    }
};
