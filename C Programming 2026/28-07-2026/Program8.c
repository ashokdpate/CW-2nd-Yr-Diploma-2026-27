// 8 Write a program to Find the Sum of First N Natural Numbers
// using while loop


int main(int argc, char const *argv[])
{
    int i=1;
    int sum=0;
    while (i<=10)
    {
        sum=sum+i;
    }
    
    printf("%d", sum);
    return 0;
}

