/*https://www.hackerrank.com/challenges/find-digits/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen*/
int findDigits(int n) {
  int devisor_count = 0;
  int d = n;
  int r = 0;
  while (1) {
    r = d % 10;
    d = d / 10;
    if (r != 0 && n % r == 0)
      devisor_count += 1;
    if (d < 10) {
      if (d != 0 && n % d == 0)
        devisor_count += 1;
      break;
    }
  }
  return devisor_count;
}