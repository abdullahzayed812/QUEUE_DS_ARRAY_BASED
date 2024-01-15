#include "queue.h"

void initializeQueue(Queue* pq) {
  pq->front = 0;
  pq->rear = -1;
  pq->size = 0;
}

void append(Queue* pq, QueueEntry e) {
  pq->rear = (pq->rear + 1) % MAX_QUEUE;
  pq->entry[pq->rear] = e;
  pq->size++;
}

void serve(Queue* pq, QueueEntry* pe) {
  *pe = pq->entry[pq->front];
  pq->front = (pq->front + 1) % MAX_QUEUE;
  pq->size--;
}

bool queueEmpty(Queue* pq) { return !pq->size; }

bool queueFull(Queue* pq) { return pq->size == MAX_QUEUE; }

void traverseQueue(Queue* pq, void (*pf)(QueueEntry)) {
  for (int pos = pq->front, end = 0; end < pq->size; end++) {
    (*pf)(pq->entry[pos]);
    pos = (pos + 1) % MAX_QUEUE;
  }
}
