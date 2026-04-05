// implementing merge sort in c with recusrion on an array of doublkes

#include <stdio.h>
#include <stdlib.h>

int main() { 
    double listNums[] = {38.5, 27.2, 43.1, 3.9, 9.0, 82.4, 10.5};
    int length = sizeof(listNums) / sizeod(listNums[0]);
    int rightIndex = length - 1; 
    int leftIndex = 0;
    int middleIndex = (rightIndex + leftIndex) / 2 ;

    // first step in merge sort is two divide the array into two halves
    merge (listNums, leftIndex, middleIndex, rightIndex);

}

// l is left index, m is middle indexs and r is right index
void merge (double arr[], int l, int m, int r) { 
    int i, j, k; 
    int n1 = m - l + 1;  
    int n2 = r-m; 
}