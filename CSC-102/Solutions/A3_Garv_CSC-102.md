# Assignment 3

## Question 1

Example Matrix :
$$\begin{bmatrix} 1 & 2 & 3 & 4 & 5 \\ 6 & 0 & 0 & 7 & 8 \\ 9 & 0 & 10 & 0 & 11 \\ 12 & 13 & 0 & 0 & 14 \\ 15 & 0 & 0 & 0 & 16\end{bmatrix}$$ 

In an $n \times n$ matrix, non zero elements are: 
- $n$ first row elements
- $n$ first column elements
- $n$ last column elements
- $n$ anti diagonal elements

In this counting few elements are repeated like $(1,1) , (1,n)[twice] , (n,1) $

> $\therefore$ Total non zero elements in ***a-matrix*** are **$4n  - 4$**

As there are only $4n-4$ non zero elements , we can make an algorithm which only traverse through these elements and add them.
We can achieve $O(n)$ time complexity by adding the elements as a row, column and anti-diagonal. 

***C++ Implementation***

```cpp
#include <vector>
using namespace std;

vector<vector<int>> addAmatrix(vector<vector<int>>& a, vector<vector<int>>& b ) {
    size_t n = a.size();
    vector<vector<int>> c ;
    //adding anti                                                                                                                                                                                                        
    for(int i = 1 ; i < n ; i++) {
        c[i][n-i-1] = a[i][n-i-1] + b[i][n-i-1] ;
    }
    //adding 1st column & last column
    for(int i = 0 ; i < n ; i++) {
        
        c[i][n-1] = a[i][n-1] + b[i][n-1] ;
        if(i == n-1) break ;
        c[i][0] = a[i][0] + b[i][0] ;
    }
    //adding 1st row
    for(int j = 1 ; j < n-1 ; j++) {
        c[0][j] = a[0][j] + b[0][j];
    }
    return c ;
}
```


## Question 2


                    
                    
                    
