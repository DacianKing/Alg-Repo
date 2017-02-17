#include<stdlib.h>
#include<stdio.h>

struct list {
    int x;
    struct list *next;
};


int main() {
  struct list *current, *pointer = NULL;


  for(int i = 1; i <= 5; ++i) {
      current = (struct list*)malloc(sizeof(struct list));
      current->x = i;
      current->next = pointer;
      pointer = current;
  }

  current = pointer;

  while(current) {
    printf("%d\n",current->x);
    current = current->next;
  }


}
