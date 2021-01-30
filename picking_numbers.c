/*https://www.hackerrank.com/challenges/picking-numbers/problem*/
int pickingNumbers(int a_count, int* a) {
    int max_length = 0 ;
    int numbers[101]={}; /*All cells will be set to zero*/	
    for(int i=0;i<a_count;i++)
         numbers[*(a+i)]++;
    
    for(int i=1;i<101;i++){
        int curent_index = i;
        int next_index = i+1;
        if(next_index==101)
            break;            
        max_length = ((numbers[curent_index]+numbers[next_index])>max_length)?
        (numbers[curent_index]+numbers[next_index]):max_length;
    }
    return max_length;
}
