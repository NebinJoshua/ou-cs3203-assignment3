//============================================================================
// Name        : 1.cpp
// Author      : Nebin Joshua
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int arr[]) {
	int sum = 0;
	for(int i = 0; i <= sizeof(arr); i++){
		sum = sum + arr[i];
	}
	return sum;
}
int mul(int arr[], int length){
      int i;
      int temp = 1;
      for(i = 0; i < length; i++){
          temp = temp * arr[i];
      }
      return temp;
}
void reverse(int arr[], int start, int end){
      while(start < end){
          int temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
    }
}

int main() {
      int a = 10;
      int sum = 0;

      int num[a];
      for(int i = 0; i < a; i++){
          cout << "Enter array values " << endl;
          cin >> num[i];

      }
      sum = add(num);
      cout << "Sum: " << sum;
      int length = sizeof(num)/sizeof(num[0]);
      int value = mul(num, length);
      printf("\nArray Multiplication: %d", value);
      cout << "\nReversed Array: " << endl;
      reverse(num, 0, 10-1);
      for(int k = 0; k < a; k++){
          cout << num[k] << " ";
      }

}



