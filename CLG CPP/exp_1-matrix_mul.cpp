#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    int rows, cols;
    vector<vector<int>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

    void setData(const vector<vector<int>>& inputData) {
        if (inputData.size() != rows || inputData[0].size() != cols) {
            throw invalid_argument("Data dimensions do not match matrix dimensions.");}
        data = inputData;
    }
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw invalid_argument("Num of columns of 1st is != num of rows of 2nd matrix");
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;}};

int main() {
    Matrix matrix1(2, 3);
    Matrix matrix2(3, 2);

    matrix1.setData({{1, 2, 3}, {4, 5, 6}});

    matrix2.setData({{7, 8}, {9, 10}, {11, 12}});

    Matrix resultMatrix = matrix1 * matrix2;

    cout << "Matrix 1:" << endl;
    matrix1.display();
    cout << endl;

    cout << "Matrix 2:" << endl;
    matrix2.display();
    cout << endl;

    cout << "Result of Multiplication:" << endl;
    resultMatrix.display();

    return 0;
}



















