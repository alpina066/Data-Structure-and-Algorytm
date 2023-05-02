#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  Stack s;

  s.push(10);
  s.push(11);
  s.push(12);
  s.push(13);
  s.push(14);

  s.printElements();

  cout << "Top Element : " << s.top() << endl;

  cout << "Popped Element : " << s.pop() << endl;

  s.printElements();

  return 0;
}
