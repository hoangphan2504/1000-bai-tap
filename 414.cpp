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
  for(int j = 0; j < col; j++)
  {
    for(int i = 0; i < row - 1; i++)
    {
      for(int k = i + 1; k < row; k++)
      {
        if(j % 2 == 0)
        {
          if (arr[i][j] < arr[k][j])      
          {
            SwapNumber(arr[i][j], arr[k][j]);
          }
        }
        else
        {
          if (arr[i][j] > arr[k][j])      
          {
            SwapNumber(arr[i][j], arr[k][j]);
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
