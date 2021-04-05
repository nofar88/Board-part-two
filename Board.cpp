#include <iostream>
#include <string>
#include "Board.hpp"
#include "Direction.hpp"

using namespace std;
using namespace ariel;



void Board::post(unsigned int row, unsigned int column, Direction way, string s) {

    unsigned int lens = s.length();
    for (unsigned int  i = 0; i < lens; ++i) {
        matrix[row + (way == Direction::Vertical ? i : 0)][column + (way == Direction::Horizontal ? i : 0)] = s[i];// Insert the word in the appropriate row and column
    }

    //Got to the point where they put the word into the board

    //Save the top corner
    if (row < minr) {
        minr = row;
    }
    if (column < minc) {
        minc = column;
    }
    // Save the bottom corner
    if (way == Direction::Vertical) {
        row += lens - 1;// Minus one that starts from a zero index
    } else {
        column += lens- 1;
    }

    if (lenr < row) {
        lenr = row;
    }
    if (lenc < column) {
        lenc = column;
    }
}

string Board::read(unsigned int row, unsigned int column, Direction way, unsigned int len) {
    string ad;
    for (unsigned int i = 0; i < len; ++i){ 
        //Go through the indexes of the word
        unsigned int newRow = row + (way == Direction::Vertical ? i : 0);
        unsigned int newCol = column + (way == Direction::Horizontal ? i : 0);
        if (matrix.count(newRow) != 0 && matrix[newRow].count(newCol) != 0) {//Checks that the row also exists and checks that both the row and the column exist
            ad += matrix[newRow][newCol];
        } else {
            ad += "_";
        }
    }
    return ad;
}


void Board::show() {
    for (unsigned int i = minr-2; i <= lenr+2; ++i) {
        for (unsigned int j = minc-2; j <= lenc+2; ++j) {
            if (matrix.count(i) != 0 && matrix[i].count(j) != 0) {
                cout << matrix[i][j];
            } else {
                cout << "_";
            }
        }
        cout << endl;
    }
}
