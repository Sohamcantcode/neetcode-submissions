class Solution {
public:
    int n = 9;
    bool rowDuplicate(vector<char> &row)
    {   
        unordered_map<int,int> map;
        for(int i = 0;i<n;i++)
        {
            if(row[i] != '.')
            {
                map[(int)row[i]]++;
            }
            
        }
        for(int i = 0;i<n;i++)
        {
            if(map[row[i]] > 1)
            {
                return true;
            }
        }
        return false;

    }
    bool colDuplicate(vector<char> &col)
    {
        unordered_map<int,int> map;
        for(int i = 0;i<n;i++)
        {
            if(col[i] != '.')
            {
                map[(int)col[i]]++;
            }
            
        }
        for(int i = 0;i<n;i++)
        {
            if(map[col[i]] > 1)
            {
                return true;
            }
        }
        return false;
    }
    bool boxDuplicate(vector<vector<char>> &arr)
    {
        unordered_map<int,int> map;
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                if(arr[i][j] != '.')
                {
                    map[(int)arr[i][j]]++;
                }
                
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                if(arr[i][j] != '.' && map[(int)arr[i][j]] > 1)
                {
                    return true;
                }
                
            }
        }
        return false;

    }

    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int n = 9;
        vector<char> arr;
        for(int i = 0;i<9;i++)
        {
            if(rowDuplicate(board[i]))
            {
                return false;
            }
        
        }
        
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                arr.push_back(board[j][i]);
            }

            if(colDuplicate(arr))
            {
                return false;
            }
            arr.clear();
        }
        for(int boxRow = 0;boxRow<9;boxRow+=3)
        {
            for(int boxCol = 0;boxCol<9;boxCol+=3)
            {
                vector<vector<char>> arr(3,vector<char>(3)); // creates 3 elements where each element is a vector of 3 characters
                for(int i = boxRow;i<boxRow+3;i++)
                {
                    for(int j = boxCol;j<boxCol+3;j++)
                    {
                        arr[i-boxRow][j-boxCol] = board[i][j];
                    }
                }
                if(boxDuplicate(arr))
                {
                    return false;
                }

            }
        }
        return true;

    }
};
