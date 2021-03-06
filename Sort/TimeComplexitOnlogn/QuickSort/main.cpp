#include <iostream>
#include <algorithm>
#include "Student.h"
#include "SortTestHelper.h"
using namespace :: std;


template<typename T>
int __partition(T arr[],int left,int right){

    T v =arr[left];

    int i;

    /*arr[l+1...j] < v ; arr[j+1...right] > v*/
    int j = left;
    for(i = left+1; i <= right; i++){

      if(arr[i] <= v ){
        swap(arr[i],arr[j+1]);
        j++; 
      } 

    }
    swap(arr[left],arr[j]);

    return j;



}


template<typename T>

void __QuickSort(T arr[],int left,int right){

  if( left >= right ){
    return;
  }

  int p = __partition(arr,left,right);
  __QuickSort(arr,left,p-1);
  __QuickSort(arr,p+1,right);

  

}




template<typename T>

void QuickSort(T arr[],int n){

  __QuickSort(arr,0,n-1);

}

 




int main(){

  /*测试浮点数*/
    float arr1[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10};
    /*测试字符串*/
    string arr2[4] = {"A","B","C","D"};

    int n = 1000000;

    /*测试无序数组*/
    int *arrtest1 = SortTestHelper::generateRandomArray(n,0,n); 
    /*测试几乎有序数组*/
  /*int *arrtest1 = SortTestHelper::generateNealyOrderedRandomArray(n,50);*/
    /*测试结构体*/
  /*Student a[4] = {{"XiaoMing",100},{"DaMing",10},{"ZhongMing",80},{"WeiMing",150}};*/
    /*复制第一组无序数组用于对比优化前后处理时间的区别*/
    int *arrtest2 = SortTestHelper::copyIntArray(arrtest1,n);
    SortTestHelper::TestSort("Quick Sort",QuickSort,arrtest1,n);


    delete[] arrtest1;
    delete[] arrtest2;


    return 0;




}