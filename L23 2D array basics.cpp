#include<iostream>
#include <climits>
using namespace std;

bool ispresent(int arr[][3], int target, int i,int j){
  for(int i=0; i<3; i++){
    for(int j=0 ; j<3; j++){
      if(arr[i][j]==target){
        return 1;
      }
    }
  }
  return 0;
}

void printrowsum(int arr[][3],  int i,int j){
  cout << "print row sum : " << endl;
  for(int i=0; i<3; i++){
    int sum = 0;
    for(int j=0 ; j<3; j++){
      sum += arr[i][j];
    }
    cout << sum << " ";
  }
  cout << endl;
}

void printcolsum(int arr[][3],  int i,int j){
  cout << "print col sum : " << endl;
  for(int j=0; j<3; j++){
    int sum = 0;
    for(int i=0 ; i<3; i++){
      sum += arr[i][j];
    }
    cout << sum << " ";
  }
  cout << endl;
}

int largestrowsum(int arr[][3]){
  int maxi = INT_MIN;
  int rowindex = -1;
  for(int i=0; i<3; i++){
    int sum = 0;
    for(int j=0 ; j<3; j++){
      sum += arr[i][j];
    }
    if(sum > maxi){
      maxi =sum;
      rowindex = i;
    }
  }
  cout << "largest sum is : "<< maxi << endl;
  return rowindex ;
}

int largestcolsum(int arr[][3]){
  int maxi = INT_MIN;
  int colindex = -1;
  for(int j=0; j<3; j++){
    int sum = 0;
    for(int i=0 ; i<3; i++){
      sum += arr[i][j];
    }
    if(sum > maxi){
      maxi =sum;
      colindex = j;
    }
  }
  cout << "largest sum is : "<< maxi << endl;
  return colindex ;
}


int main(){
  int arr[3][3];
  cout << "enter array : " << endl ;
  for(int i=0; i<3; i++){
    for(int j=0 ; j<3; j++){
      cin>>arr[i][j];
    }
  }
  //int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  for(int i = 0 ; i<3; i++){
    for(int j=0 ; j<3; j++){
      cout<<arr[i][j] << " ";
    }
    cout<<endl;
  }
  int target;
  cout << "element to find : " << endl;
  cin >> target;
  
 if(ispresent(arr,target,3,3)){
   cout << "element found !!!" << endl;
 }
  else{
    cout << "not found !!!" << endl;
  }
  printrowsum(arr,3,3);
  printcolsum(arr,3,3);
  int rowindex = largestrowsum(arr);
  cout << "Row index with the largest sum: " << rowindex << endl;
  int colindex = largestcolsum(arr);
  cout << "col index with the largest sum: " << colindex << endl;
  
  
return 0;
}
