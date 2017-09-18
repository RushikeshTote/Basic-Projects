//Insertion Sort
//C++

#include <bits/stdc++>
using namespace std;

void InsertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main ()
{
 int n ;
 cin >> n;
 int arr[n];
 for (int a=0; a<n; a++)
 {
     cin >> arr[a];
 }
 InsertionSort(arr,n);
 for (int a=0; a<n; a++)
 {
     cout << arr[a]<< " ";
 }
 return 0;
}
