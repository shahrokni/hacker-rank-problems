/*https://www.hackerrank.com/challenges/permutation-equation/problem*/
int * permutationEquation(int p_count, int * p, int * result_count) {
  * result_count = p_count;
  static int y_arr[51];
  for (int i = 0; i < p_count; i++) {
    int x = * (p + * (p + i) - 1);
    printf("x = %d p(p(%d)) = %d \n", x, i, *(p + * (p + i) - 1));
    y_arr[x - 1] = i + 1;
  }
  return y_arr;
}