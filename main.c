#include "headers.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main(){
  struct node *test = malloc(sizeof(node));

  printf("Printing list test: ")
  print_list(test);

  printf("_________Testing Insertion__________\n");
  int x;
  for (x = 0; x < 10; x++){
    test = insert_front(test, i);
    printf("Inserted %d to front", x);
    print_list(test);
    printf("\n");
  }

}
