#include <stdio.h> 
#include "queue.h"

int main(void) 
{
  int n;

  printf("Enter the length of the queue: ");
  scanf("%d", &n);
  QUEUEinit(n);
  QUEUEput(1);
  QUEUEput(2);
  /* QUEUEput(3); */
  printf("%d ", QUEUEget());
  printf("%d\n", QUEUEget());
  QUEUEget();
  return 0;
}
