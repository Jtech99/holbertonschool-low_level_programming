int main(void)
{
    int num = 42;

    printf("Before: %d\n", num);
    reset_to_98(&num);  /* pass the address of num */
    printf("After: %d\n", num);

    return 0;
}