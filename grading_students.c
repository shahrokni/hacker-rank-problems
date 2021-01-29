/*You can read about the problem reading the below link!*/
/*https://www.hackerrank.com/challenges/grading/problem*/
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *result = malloc(grades_count * sizeof(int));
    int next_multiple_five = 0; 
    for(int i=0;i<grades_count;i++){
        int actual_score = grades[i];
        if(actual_score<38){
            *(result+i) = actual_score;
        }
        else{
			/*Calculate the next multiple of five*/
            int d = actual_score / 5 ;
            next_multiple_five = (d+1)*5;
            if((next_multiple_five - actual_score)<3){
                *(result+i) = next_multiple_five;
            }
            else{
                *(result+i) = actual_score;
            }
        }
    }    
    return result;
}
