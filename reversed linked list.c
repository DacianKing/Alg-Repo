#include<stdlib.h>
#include<stdio.h>

struct list {
    int x;
    struct list *next;
};


struct list *prev = NULL;

void reverse(struct list *node) {
  while(node) {
    struct list *temp = node;
    node = node->next;
    temp->next = prev;
    prev = temp;
  }
}


int main() {
  struct list *current, *pointer = NULL;


  for(int i = 1; i <= 5; ++i) {
      current = (struct list*)malloc(sizeof(struct list));
      current->x = i;
      current->next = pointer;
      pointer = current;
  }

  current = pointer;

  reverse(current);

  while(prev) {
    printf("%d\n",prev->x);
    prev = prev->next;
  }


}
