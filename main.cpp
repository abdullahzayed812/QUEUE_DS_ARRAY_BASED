#include <iostream>

#include "queue.h"

void print(QueueEntry item) { std::cout << item << "\n"; }

int main() {
  Queue q;

  initializeQueue(&q);

  append(&q, 10);
  append(&q, 20);
  append(&q, 30);
  append(&q, 40);
  append(&q, 50);

  int num = 0;

  traverseQueue(&q, print);

  return 0;
}