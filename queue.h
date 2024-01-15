#ifndef QUEUE_CLASS_H
#define QUEUE_CLASS_H 1

typedef int QueueEntry;

#define MAX_QUEUE 100

struct Queue {
  int front;
  int rear;
  int size;

  QueueEntry entry[MAX_QUEUE];
};

void initializeQueue(Queue* pq);
void append(Queue* pq, QueueEntry e);
void serve(Queue* pq, QueueEntry* pe);
void traverseQueue(Queue* pq, void (*pf)(QueueEntry));

#endif