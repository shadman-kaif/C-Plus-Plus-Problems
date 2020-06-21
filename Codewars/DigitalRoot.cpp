/*
Digital root is the recursive sum of all the digits in a number.

Given n, take the sum of the digits of n. 
If that value has more than one digit, continue reducing in this way until a single-digit number is produced. 
This is only applicable to the natural numbers.
*/

int root(int num) {
    int sum = 0;
    while(num) {
      int digit = num%10;
      sum += digit;
      num /= 10;
    }
    return sum;
}

int digital_root(int n)
{
    int sum = 0;
    if (n == 0) {
        return 0;
    }
    while(n >= 10) {
      n = root(n);
    }
    return n;
}