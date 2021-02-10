/*https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem?h_r=next-challenge&h_v=zen*/
int jumpingOnClouds(int c_count, int * c, int k) {
  int i = 0;
  int lost_energy = 0;
  while (true) {
    int cloud_type = * (c + i);
    lost_energy = (cloud_type == 1) ? lost_energy + 3 : lost_energy + 1;
    i = (i + k) % c_count;
    if (i == 0)
      break;
  }
  return 100 - lost_energy;
}