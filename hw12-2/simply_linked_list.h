#ifndef __SIMPLY_LINKED_LIST_H__
#define __SIMPLY_LINKED_LIST_H__

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Node {
public:
	Node() : next(nullptr) {}
	Node(T t) : data(t), next(nullptr) {}

	T data;
	Node<T>* next;
};

template <class T>
class List {
	Node<T>* head;

	void clear() {
		if (!head) return;
		Node<T>* prev = head;
		Node<T>* curr = head->next;
		while (curr) {
			delete prev;
			prev = curr;
			curr = curr->next;
		}
		delete prev;
	}
public:
	List() : head(nullptr) {}

	List(T* arr, int n) : head(nullptr) {
		for (int i = 0; i < n; i++) {
			push_back(arr[i]);
		}
	}

	~List() {
		clear();
	}

	List<T>& operator=(const List<T>& rhs) {
		clear();
		Node<T>* rhs_curr = rhs.head;
		while (rhs_curr) {
			push_back(rhs_curr->data);
			rhs_curr = rhs_curr->next;
		}
	}

	int size() const {
		int count = 0;
		Node<T>* curr = head;
		while (curr) {
			count++;
			curr = curr->next;
		}
		return count;
	}

	void insert_at(int idx, T& data) {
		if (!head) return;
		Node<T>* prev;
		Node<T>* curr = head;
		for (int i = 0; i < idx; i++) {
			prev = curr;
			curr = curr->next;
			if (!curr) return;
		}
		prev->next = new Node<T>(data);
		prev->next->next = curr;
	}

	void remove_at(int idx) {
		if (!head) return;
		Node<T>* prev;
		Node<T>* curr = head;
		for (int i = 0; i < idx; i++) {
			prev = curr;
			curr = curr->next;
			if (!curr) return;
		}
		if (curr == head) {
			prev = curr;
			head = curr->next;
			delete prev;
		} else {
			prev->next = curr->next;
			delete curr;
		}
	}

	void push_back(T& data) {
		if (!head) {
			head = new Node<T>(data);
			return;
		}
		Node<T>* curr = head;
		while (curr->next) curr = curr->next;
		curr->next = new Node<T>(data);
	}

	void pop_back() {
		if (!head) return;
		Node<T>* prev;
		Node<T>* curr = head;
		while (curr->next) {
			prev = curr;
			curr = curr->next;
		}
		if (curr == head) {
			delete curr;
			head = nullptr;
		} else {
			delete curr;
			prev->next = nullptr;
		}
	}

	void push_front(T& data) {
		Node<T>* curr = head;
		head = new Node<T>(data);
		head->next = curr;
	}

	void pop_front() {
		Node<T>* curr = head->next;
		delete head;
		head = curr;
	}

	friend std::ostream& operator<<(std::ostream& out, const List<T>& rhs) {
		if (!rhs.head) return out;
		Node<T>* curr = rhs.head;
		while (curr->next) {
			out << curr->data << ", ";
			curr = curr->next;
		}
		out << curr->data;
		return out;
	}
};

#endif
