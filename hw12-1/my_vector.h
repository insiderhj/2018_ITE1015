#ifndef __MY_CONTAINER_H__
#define __MY_CONTAINER_H__

template <class T>
class MyContainer {
protected:
	T* obj_arr;
	int n_elements;
public:
	MyContainer() : obj_arr(NULL), n_elements(0) {}

	MyContainer(int n) {
		n_elements = 0;
		obj_arr = new T[n_elements];
	}

	~MyContainer() {
		if (obj_arr) delete[] obj_arr;
	}

	void clear() {
		n_elements = 0;
	}

	int size() const {
		return n_elements;
	}
};

template <class T>
class MyVector : public MyContainer<T> {
	int capacity;
public:
	MyVector() : MyContainer<T>(), capacity(0) {}

	MyVector(int n) : MyContainer<T>(n), capacity(n) {}

	MyVector<T>& operator=(const MyVector<T>& rhs) {
		if (this->obj_arr) delete[] this->obj_arr;
		capacity = rhs.capacity;
		this->n_elements = rhs.n_elements;
		this->obj_arr = new T[capacity];
		for (int i = 0; i < this->n_elements; i++) this->obj_arr[i] = rhs.obj_arr[i];
		return *this;
	}

	bool empty() const {
		return (this->n_elements == 0);
	}

	int max_size() const {
		return capacity;
	}

	void reserve(int new_cap) {
		capacity = new_cap;
		this->n_elements = this->n_elements < capacity ? this->n_elements : capacity;
		T* temp = new T[capacity];
		for (int i = 0; i < new_cap; i++) temp[i] = this->obj_arr[i];
		if (this->obj_arr) delete[] this->obj_arr;
		this->obj_arr = temp;
	}

	void push_back(T obj) {
		if (this->n_elements >= capacity) capacity < 1 ? reserve(1) : reserve(capacity * 2);
		this->obj_arr[this->n_elements] = obj;
		this->n_elements++;
	}

	void pop_back() {
		this->n_elements--;
	}

	T& front() {
		return this->obj_arr[0];
	}

	T& back() {
		return this->obj_arr[this->n_elements - 1];
	}

	T& at(const int idx) {
		return this->obj_arr[idx];
	}

	const T& at (const int idx) const {
		return this->obj_arr[idx];
	}

	T& operator[](const int idx) {
		return this->obj_arr[idx];
	}

	const T& operator[](const int idx) const {
		return this->obj_arr[idx];
	}

	MyVector<T> operator+(const MyVector<T>& rhs) {
		MyVector<T> temp;
		temp = *this;
		for (int i = 0; i < rhs.n_elements; i++) temp.push_back(rhs[i]);
		return temp;
	}
};

#endif
