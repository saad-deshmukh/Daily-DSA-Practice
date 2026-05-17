'''Given an m x n grid of characters board and a string word, return true if word exists in the grid.
The word can be constructed from letters of sequentially adjacent cells, where adjacent cells 
are horizontally or vertically neighboring. 
The same letter cell may not be used more than once.'''
from typing import List
class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        rows = len(board)
        cols = len(board[0])
    
        def dfs(r,c,index):
            if index == len(word):
                return True
            if (r<0 or r >= rows or c<0 or c>= cols or board[r][c] != word[index]):
                return False
            temp = board[r][c]
            board[r][c] = "#"

            found = (
                dfs(r+1,c,index+1) or 
                dfs(r-1,c,index+1) or
                dfs(r,c+1,index+1) or
                dfs(r,c-1,index+1) 
            )
  
            board[r][c] = temp
            return found

        for i in range(rows):
            for j in range(cols):
                if dfs(i,j,0):
                    return True
        return False
    
obj= Solution()

board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "ABCCED"

ans = obj.exist(board,word)
if ans: 
   print("the given word exists in the matrix")
else:
    print("Given word doesn't exists in the matrix")
    