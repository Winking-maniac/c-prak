class Sum {
    public:
        Sum() = default;
        Sum(const int a, const int b) : x(a+b) {}
        Sum(const Sum a, const int b) : x(a.x + b) {}
        long long int get() const { return x; }
    private:
        long long int x;
};
