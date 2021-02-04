/*https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse_number(int number, double * position) {

  int r = number % 10;
  int d = number / 10;
  if (d != 0) {

    double prev_position = reverse_number(d, position);
    double new_number = prev_position + (pow(10, * position) * r);
    int i_new_number = new_number;
    * position = * position + 1;
    return i_new_number;
  }

  double lowest_position = (pow(10, * position) * r);
  int i_lowest_position;
  i_lowest_position = lowest_position;
  * position = * position + 1;
  return i_lowest_position;

}

int beautifulDays(int i, int j, int k) {

  int final_result = 0;
  double * poisition = malloc(sizeof(double));
  * poisition = 0;

  for (int c = i; c <= j; c++) {
    int actual_number = c;
    int reveresd = reverse_number(c, poisition);
    if ((abs(actual_number - reveresd) % k) == 0) {
      final_result++;
    }
    * poisition = 0;
  }

  return final_result;
}