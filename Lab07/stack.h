#include <iostream>
#include <iomanip> 

template <typename T>
class BaseStack
{
protected:
	T *stackPtr;
	const int size;
	int top;
public:
	BaseStack(int maxSize);
	~BaseStack() {}

	inline bool isE() { return top == 0; }
	virtual inline void push(const T value) = 0;
	virtual inline T pop() = 0;
	virtual inline void printStack() = 0;
	virtual inline const T &Peek(int) const = 0;
	virtual inline int getStackSize() const = 0;
	virtual inline int getTop() const = 0;
};

template <typename T>
class Stack : public BaseStack<T>
{                        
public:
	Stack(int maxSize) : BaseStack<int>(maxSize) {}
	~Stack();                         

	inline void push(const T value) override;
	inline T pop() override;
	inline void printStack() override;
	inline const T &Peek(int) const override;
	inline int getStackSize() const override;
	inline int getTop() const override;        
};

template <typename T>
BaseStack<T>::BaseStack(int maxSize) :
	size(maxSize)
{
	stackPtr = new T[size];
	top = 0;
}


template <typename T>
Stack<T>::~Stack()
{
	delete[] stackPtr;
}

template <typename T>
inline void Stack<T>::push(const T value)
{
	if (top < size)
		stackPtr[top++] = value;
}

template <typename T>
inline T Stack<T>::pop()
{
	if (top > 0)
		return stackPtr[--top];
}

template <class T>
inline const T &Stack<T>::Peek(int nom) const
{
	if (nom <= top)
		return stackPtr[top - nom];
}

template <typename T>
inline void Stack<T>::printStack()
{
	for (int ix = top - 1; ix >= 0; ix--)
		cout << "|" << setw(4) << stackPtr[ix] << endl;
}

template <typename T>
inline int Stack<T>::getStackSize() const
{
	return size;
}

template <typename T>
inline int Stack<T>::getTop() const
{
	return top;
}