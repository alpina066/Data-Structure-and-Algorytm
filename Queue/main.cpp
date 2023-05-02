#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
  Queue q;

  q.enqueue(10);
  q.enqueue(11);
  q.enqueue(12);
  q.enqueue(13);
  q.enqueue(14);

  q.printElements();

  cout << "Front Element : " << q.front() << endl;

  cout << "Dequeued Element : " << q.dequeue() << endl;

  q.printElements();

  return 0;
}
