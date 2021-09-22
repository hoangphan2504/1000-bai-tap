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

void SapXep(int arr[][100], int row, int col)
{
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col - 1; j++)
    {
      for(int k = j + 1; k < col; k++)
      {
        if(i % 2 == 0)
        {
          if (arr[i][j] > arr[i][k])      
          {
            SwapNumber(arr[i][j], arr[i][k]);
          }
        }
        else
        {
          if (arr[i][j] < arr[i][k])      
          {
            SwapNumber(arr[i][j], arr[i][k]);
          }
        }
      }
    }
  }
}

int main()
{
    int row, col;

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

    
    SapXep(arr, row, col);
    XuatMang(arr, row, col);
    
}
