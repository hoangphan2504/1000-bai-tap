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

void XoayChieu(int arr[], int col)
{
  int b[100], index=0;
  for(int i=0; i<col; i++)
  {
    b[index++]=arr[i];
  }

  index=0;
  for(int i=col-1; i>=0; i--)
  {
    arr[i]=b[index++];
  }
}

void SapXep(int arr[][100], int row, int col)
{
  int n=row*col;
  for(int i=0; i<n-1; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      if(arr[i/col][i%col]>arr[j/col][j%col])
      {
        SwapNumber(arr[i/col][i%col], arr[j/col][j%col]);
      }
    }
    XuatMang(arr, row, col);
    cout << endl;
    if((i%col)>row-1)
    {
      if( (i/col) % 2 != 0)
      {
        XoayChieu(arr[i/col], col);
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
