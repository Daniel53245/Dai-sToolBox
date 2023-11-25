#include <stdio.h>

int* insertion_sort(int* list,int len){
  int buf = 0;
  int key = 0;
  for(int i = 1; i<len ; i++){
    key = list[i];
    int j = i - 1;//the largest position in thel list
    //insert key to right position from A[0,j]
    while(j>=0 && list[j] >= key){
      list[j+1] = list[j];
      j--;
    }
    list[j+1] = key;
  }
  
  return list; 
}

void print_array(int* array,int len){
  printf("[");
  for(int i = 0;i< len;i ++){
    printf("%d,",array[i]);
  }
  printf("]\n");
}
int main(){
  int mylist[5] = { 5,4,2,1,8};
  print_array(mylist,5);
  int* sorted_list = insertion_sort(mylist,5);
  print_array(sorted_list,5);
}
