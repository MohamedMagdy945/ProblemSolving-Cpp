#include "ZigZagProblem.h"
#include <string>
#include <vector>

using namespace std;

ZigZagProblem::ZigZagProblem() {
    // Constructor implementation (if needed)
}

ZigZagProblem::~ZigZagProblem() {
    // Destructor implementation (if needed)
}

string ZigZagProblem::convert(string s, int numRows) {
    if (numRows == 1)
        return s;

    vector<string> row(numRows);
    bool moveDown = true;
    int rowIdx = 0;

    for (auto &ch : s) {
        row[rowIdx] += ch;

        if (rowIdx == numRows - 1)
            moveDown = false;
        else if (rowIdx == 0)
            moveDown = true;

        rowIdx += (moveDown ? 1 : -1);
    }

    string ret = "";
    for (int i = 0; i < numRows; ++i)
        ret += row[i];

    return ret;
}
