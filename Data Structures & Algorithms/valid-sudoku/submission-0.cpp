class Solution {
public:

    int returnSudokuSquare(int row, int col) {
        if(row >= 0 && row <= 2) {
            if(col >= 0 && col <= 2) {
                return 0;
            }
            if(col >= 3 && col <= 5) {
                return 3;
            }
            if(col >= 6 && col <= 8) {
                return 6;
            }
        }
        if(row >= 3 && row <= 5) {
            if(col >= 0 && col <= 2) {
                return 1;
            }
            if(col >= 3 && col <= 5) {
                return 4;
            }
            if(col >= 6 && col <= 8) {
                return 7;
            }
        }
        if(row >= 6 && row <= 8) {
            if(col >= 0 && col <= 2) {
                return 2;
            }
            if(col >= 3 && col <= 5) {
                return 5;
            }
            if(col >= 6 && col <= 8) {
                return 8;
            }
        }
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> subsquares;
        int curRow = 0, curCol = 0;
        for(int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                int curNum = board[row][col];
                if(curNum == '.') continue;
                int subq = returnSudokuSquare(row, col);
                if(rows[row].count(curNum) > 0) return false;
                if(cols[col].count(curNum) > 0) return false;
                if(subsquares[subq].count(curNum) > 0) return false;
                rows[row].insert(curNum);
                cols[col].insert(curNum);
                
                subsquares[subq].insert(curNum);
                
            }
        }
        return true;
    }
};
