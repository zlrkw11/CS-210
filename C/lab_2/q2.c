int main()
{
    int n = 3;
    printf("pentagonal_numbers(%d) = %d\n", n, pentagonal_numbers(n));
}
int pentagonal_numbers(int n)
{
    // p(n) = (3*n^2 – n)/2
    int result;
    result = (3 * n * n - n) / 2;
    return result;
}