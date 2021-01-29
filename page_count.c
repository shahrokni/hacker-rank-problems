/*https://www.hackerrank.com/challenges/drawing-book/problem*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Complete the pageCount function below.
 */
 int calculate_from_back(int from_front,int last_page){
    int from_back = 0;
    if(last_page%2==0){
            from_back = (last_page / 2) - from_front;
        }
        else{
            from_back = (((last_page+1)/2)-1)-from_front;
        }
    return from_back;
}
 
int pageCount(int n, int p) {    
    
    int from_front = 0; 
    int from_back=0; 
    if(p%2==0){
        from_front = p / 2;
        from_back = calculate_from_back(from_front,n);
    }
    else{
        from_front = ((p+1)/2)-1;
        from_back = calculate_from_back(from_front, n);        
    }
    
    return (from_front<from_back)? from_front: from_back;
}