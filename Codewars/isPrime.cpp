bool isPrime(int num) {
  // Corner case if number is negative
  if (num <= 1) {
    return false;
  }
  // If number is positive
  else {
    for (int i = 2; i < num; i++) {
      // If remainder of number/i = 0, it is not prime
      if (num%i == 0) {
        return false;
      }
      // Else, it is prime
      else {
        return true;
      }
    }
  }
}