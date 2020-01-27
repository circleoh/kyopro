//https://www.acmicpc.net/problem/10828

#include <cstdio>
#include <cstring>
using namespace std;

class Node {
private:
  int data;
  Node *prev;

public:
  int getData(void) { return data; }
  Node *prevNode(void) const { return prev; }
  Node(int data, Node *prev): data(data), prev(prev) {}
};

class Stack {
private:
  int depth;
  Node *top;

public:
  Stack() {
    top = nullptr;
    depth = 0;
  }

  void push_back(int i) {
    top = new Node(i, top);
    ++depth;
  }

  int pop(void) {
    if (depth == 0) return -1;
    int ret = top->getData();
    top = top->prevNode();
    --depth;
    return ret;
  }

  int size(void) { return depth; }
  int empty(void) { return depth == 0; }

  int peek(void) {
    if (depth != 0) return top->getData();
    return -1;
  }
};

void run(Stack &stk) {
  char str[15]={0,};
  scanf("%s", str);

  if (str[0] == 'p' && str[1] == 'o') { //pop
    printf("%d\n", stk.pop()); return;
  } if (str[0] == 's') { //size
    printf("%d\n", stk.size()); return;
  } if (str[0] == 'e') { //empty
    printf("%d\n", stk.empty()); return;
  } if (str[0] == 't') { //top
    printf("%d\n", stk.peek()); return;
  } else { //push
    int i; scanf("%d", &i);
    stk.push_back(i);
  }
}

int main() {
  Stack stack; int c;
  scanf("%d", &c);
  for (int i=0; i<c; ++i) {
    run(stack);
  }
}