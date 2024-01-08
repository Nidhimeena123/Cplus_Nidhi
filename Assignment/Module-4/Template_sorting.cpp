#include<iostream>
using namespace std;

int i,j;
// template to perform sorting 
template<typename T>
void Sort(T arr[], int n)
{
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Template function to print array
// n: size of arr[]
template<typename T>
void PrintArray(T arr[], int n)
{
    for (int i=0; i<n;i++)
        cout << arr[i] << " ";
    cout <<endl<<endl;
}

int main()
{


    int arr[] = { 1, 10, 90, 100, -1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array Before Sorting: " << endl;
    PrintArray(arr, n);

    Sort(arr, n);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr, n);

}
