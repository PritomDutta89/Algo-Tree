/*

    => Bubble sort is a comparison based sorting algorithm. 
    => This is a stable sorting technique. 
    => In this algorithm 1st compared adjacent elements, if elements are in wrong order then swapped to make it correct sequence. 

*/

#include <iostream>
using namespace std;

// swapping a and b
void swapp(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void BubbleSort(int a[], int n)
{
    int i, j, p;
    for (i = 0; i < n - 1; i++)
    {
        p = 0; //Will check if there will be any swap or not
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1]) //When the current item is bigger than next item
            {
                swapp(a[j], a[j + 1]); //swap the two elements
                p = 1;                 //if swap then p=1
            }
        }

        if (p == 0) //swapping is done and there is no elements left for swapping
             break;
    }
}

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    BubbleSort(a, n);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

/*
    Test Case : 

    Input : 5
            3 5 7 1 2
    
    Output : 1 2 3 5 7

    Input : 10
            6 2 4 8 2 3 9 20 15 3
    
    Output : 2 2 3 3 4 6 8 9 15 20


    Time Complixity :  
        Best time complexity = O(n)
        Average time complexity = O(n^2)
        Worst time complexity = O(n^2)

    Space Complexity: O(1)

*/
