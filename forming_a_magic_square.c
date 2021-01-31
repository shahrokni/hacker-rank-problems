/*https://www.hackerrank.com/challenges/magic-square-forming/problem*/
int formingMagicSquare(int s_rows, int s_columns, int** s) {
    
    int best_cost = 214748364;
    int temp_cost = 0; 
    int target_squares[8][3][3]={
        {{8,1,6},{3,5,7},{4,9,2}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{2,7,6},{9,5,1},{4,3,8}}        
    };
    
    for(int arr_counter=0;arr_counter<8;arr_counter++){
        for(int row=0;row<3;row++){
            for(int col=0;col<3;col++){
                int target_cell_value = target_squares[arr_counter][row][col];
                int input_cell_value = *(*(s+row)+col);
                temp_cost = temp_cost + abs(target_cell_value - input_cell_value);
            }
        }
        best_cost = (temp_cost<best_cost)?temp_cost:best_cost;
        temp_cost = 0;
    }
    
    return best_cost;
}