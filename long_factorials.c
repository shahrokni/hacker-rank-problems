/*https://www.hackerrank.com/challenges/extra-long-factorials/problem*/
void calculate_facorial (int *target_number, int *last_index, int *max_num,
		    int current_num)
{

  if (current_num > *max_num)
    {
      for (int i = *last_index; i >= 0; i--)
	{
	  printf ("%d", *(target_number + i));
	}
      return;
    }

  int c = 0;
  for (int i = 0; i <= *last_index; i++)
    {
      int new_place_num = (*(target_number + i) * current_num) + c;
      *(target_number+i) = new_place_num % 10;
      c = new_place_num / 10;
      if(c && i==*last_index){
          *last_index = *last_index+1;
      }
    }
    
    calculate_facorial (target_number, last_index, max_num, (current_num + 1));
}




void extraLongFactorials (int n)
{
  int *target_num;
  target_num = malloc (200 * sizeof (int));
  *target_num = 1;

  int *max_num;
  max_num = malloc (sizeof (int));
  *max_num = n;

  int *last_index;
  last_index = malloc (sizeof (int));
  *last_index = 0;
  calculate_facorial (target_num, last_index, max_num, 2);

}