/**
 * @file
 * @brief Algorithm to rotate a matrix; in-place if possible
 * 
 * @author Adam Baumgartner
 * @date 1/3/2026    
 */

#include <iostream>
#include <vector>


void printMatrix(std::vector<std::vector<int>> m) {
    for(std::vector<int> row : m) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}



void rotateR90(std::vector<std::vector<int>>& m) {
    int n = m.size();

    // transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++ ) {
            std::swap(m[i][j], m[j][i]);
        }
    }

    // reverse each row
    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = n - 1;
        while (left < right) {
            std::swap(m[i][left], m[i][right]);
            left++;
            right--;
        }
    }
}

void rotateL90(std::vector<std::vector<int>>& m) {
    int n = m.size();

    // transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++){
            std::swap(m[i][j], m[j][i]);
        }
    }

    // reverse each columns (recall N x N square)
    for (int i = 0; i < n; i++) {
        int top = 0;
        int bottom = n - 1;
        while (top < bottom) {
            std::swap(m[top][i], m[bottom][i]);
            top++;
            bottom--;
        }
    }

}


int main () { // not using int argc or char* argv[].

    std::vector<std::vector<int>> matrix;

    matrix.push_back({1,2,3,4});
    matrix.push_back({5,6,7,8,});
    matrix.push_back({9,10,11,12});
    matrix.push_back({13,14,15,16});

    printMatrix(matrix);
    rotateL90(matrix);
    std::cout << "\n";
    printMatrix(matrix);



    

    return 0;
}

