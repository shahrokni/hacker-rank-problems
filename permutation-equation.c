/*https://www.hackerrank.com/challenges/permutation-equation/problem*/
int * permutationEquation(int p_count, int * p, int * result_count) {

  * result_count = p_count;
  int y_arr[p_count + 1];
  for (int i = 0; i < p_count; i++) {
    int x = * (p + * (p + i) - 1);
    y_arr[x] = i + 1;
  }
  for (int i = 1; i <= p_count; i++) {
    printf("%d\n", y_arr[i]);
  }
  return result_count;
}