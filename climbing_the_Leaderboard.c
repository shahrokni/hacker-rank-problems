/*https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem*/
#include <stdio.h>
#include <stdlib.h>

int get_rank(int * dense_ranked, int lower_bound, int upper_bound, int * score) {
   if (upper_bound >= lower_bound) {
      int middle = lower_bound + (upper_bound - lower_bound) / 2;
      if (dense_ranked[middle] == * score)
         return (middle + 1);
      else if (dense_ranked[middle] < * score)
         return get_rank(dense_ranked, lower_bound, (middle - 1), score);
      else
         return get_rank(dense_ranked, (middle + 1), upper_bound, score);
   }

   return lower_bound + 1;
}

int * mim_x(int ranked_count, int * ranked, int player_count, int * player, int * result_count) {
   int dense_ranked[ranked_count];
   int last_dense_ranked_index = -1;
   int p = -1;
   int * result = malloc(player_count * sizeof(int));
   *result_count = player_count;   
   for (int i = 0; i < ranked_count; i++) {
      if (ranked[i] == p)
         continue;
      else {
         last_dense_ranked_index++;
         dense_ranked[last_dense_ranked_index] = ranked[i];
         p = ranked[i];
      }

   }   

   for (int i = 0; i < player_count; i++) {
      int new_rank = -1;

      if (player[i] > dense_ranked[0])
         new_rank = 1;
      else if (player[i] < dense_ranked[last_dense_ranked_index])
         new_rank = last_dense_ranked_index + 2;
      else
         new_rank = get_rank(dense_ranked, 0, last_dense_ranked_index, & player[i]);
     
      *(result + i) = new_rank;
   }
   return result;
}
