#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int arr[][100], int &row, int &col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void XuatMang(int arr[][100], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void SwapNumber(int &a, int &b)
{
  int temp=a;
  a=b;
  b=temp;
}

void SapXepCotTangDan(int arr[][100], int row, int col, int n)
{
    for(int i=0; i<row-1; i++)
    {
      for(int m=i+1; m<row; m++)
      {
        if(arr[m][n] < arr[i][n])
        {
          SwapNumber(arr[i][n], arr[m][n]);
        }
      }
    }
}

int main()
{
    int row, col, n;

    cout << "Nhap so dong: ";
    cin >> row ;
    cout << "Nhap so cot: ";
    cin >> col;

    int arr[100][100];
    cout << "Nhap Mang: " << endl;
    NhapMang(arr, row, col);

    cout <<"Mang: " << endl;
    XuatMang(arr, row, col);
    cout << endl;

    cout <<"Nhap cot can sap xep: ";
    cin >> n;
    SapXepCotTangDan(arr, row, col,n);

    cout <<"Mang: " << endl;
    XuatMang(arr, row, col);
}
