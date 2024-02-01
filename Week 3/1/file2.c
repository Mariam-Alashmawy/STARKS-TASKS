int reverser (int num)
{
    int reversed_number = 0;
    while(num != 0)
    {
        int reminder = num%10;
        reversed_number = reversed_number*10+reminder;
        num/=10;
    }
    return reversed_number;
}
