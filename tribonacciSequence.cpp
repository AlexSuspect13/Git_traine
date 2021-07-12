std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    signature.resize(n);
    for (int i=3; i<n; ++i)
    {
        signature[i] = signature[i-1]+signature[i-2]+signature[i-3];
    }
    return signature;
}
