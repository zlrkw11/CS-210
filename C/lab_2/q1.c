
int array_calculation(int *array1, int *array2, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array1[i] * array2[i];
    }
    return sum;
}