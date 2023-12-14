#include <iostream>
using namespace std;
class Matrix
{
    int ROWS, COLS;
    int MATRIX[100][100];
    public:
    Matrix()
    {
    for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++) MATRIX[i][j] = 0;
    }
    void set_rows(int R)
    {
    ROWS = R;
    }
    void set_cols(int C)
    {
    COLS = C;
    }
    void input()
    {
    for (int i = 0; i < ROWS; i++)
    {
    cout << "Row " << i+1 << ": "; for (int j = 0; j < COLS; j++)
    {
    cin >> MATRIX[i][j];
    }
    }
    }
    Matrix multiply(Matrix M)
    {
    if (COLS != M.COLS)
    {
    cout << "Matrix multiplication not possible.\n"; return *this;
    }
    Matrix ANS; ANS.set_rows(ROWS); ANS.set_cols(M.COLS);
    for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < M.COLS; j++) for (int k = 0; k < COLS; k++)
    ANS.MATRIX[i][j] = ANS.MATRIX[i][j] + (MATRIX[i][k] * M.MATRIX[k][j]);
    return (Matrix) ANS;
    }
    void print()
    {
    for (int i = 0; i < ROWS; i++)
    {
    for (int j = 0; j < COLS; j++)
    {
    cout << MATRIX[i][j] << "\t";
    }
    cout << "\n";
    }
    }
};
int main()
{
Matrix A, B; int r, c;
cout << "Enter the number of rows of Matrix A: "; cin >> r;
A.set_rows(r);
cout << "Enter the number of columns of Matrix A: "; cin >> c;
A.set_cols(c);
cout << "Enter the number of rows of Matrix B: "; cin >> r;
B.set_rows(r);
cout << "Enter the number of columns of Matrix B: "; cin >> c;
B.set_cols(c);
cout << "\n| Enter Matrix A |\n\n"; A.input();
cout << "\n| Enter Matrix B |\n\n"; B.input();
Matrix C;
C = A.multiply(B);
cout << "\n| Multiplied matrix |\n\n"; C.print();
cout << "Made by Ishan Mehta "<<endl;
return 0;
}