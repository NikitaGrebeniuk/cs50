#include <iostream>

using namespace std;

void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;

}
 void printArray(int arr[], int size) {
 for (int i =0; i < size; i++){

 cout << arr[i] << " "<<endl;
}
}
void quickSort(int arr[],int l,int r,int size)
{
        int number = arr[rand() % size + l];
        if(size >1)
        {
            while(l<r)
            {
                while(arr[r] > number && r >l )
                {
                    r--;
                }
                while(arr[l] < number && l <= r)
                {
                    l++;
                }
                if(l<r)
                {
                    swap(arr[l],arr[r])
                    l++;
                }
            }
            quickSort(arr,left,l);
            quickSort(arr,right,r)
        }
}
int main (void)
{
    int arr[] ={1,4,5,5,67,8,9,123};
    int n =sizeof(arr)/sizeof(arr[0]);

    int count = 5;
    int *p_count;

    p_count=&count;

    cout <<&count<< endl;
    cout<<p_count <<endl;
}