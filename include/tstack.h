// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
typedef char type;
const int size = 100;
class SStack {
private:
	type arr[size];
	int top;
public:
	SStack() : top(-1) { }
	type get() const {
		return arr[top];
	}
	bool isEmpty() const {
		return top == -1;
	}
	bool isFull() const {
		return top == size-1;
	}
	void pop() {
		if (top >= 0)
			top--;
	}
	void push(type item) {
		if (top < size-1)
			arr[++top] = item;
  }
};

typedef int type1;
class Stack {
private:
  type1 arr[size];
  int top;
public:
	Stack() : top(-1) { }
	type1 get() const {
		return arr[top];
	}
	bool isEmpty() const {
		return top == -1;
	}
	bool isFull() const {
		return top == size - 1;
	}
	void pop() {
		arr[top] = 0;
		if (top >= 0)
			top--;
	}
	void push(type1 item) {
		if (top < size - 1)
			arr[++top] = item;
	}
};

#endif  // INCLUDE_TSTACK_H_
