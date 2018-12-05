#ifndef __MY_SHARED_PTR_H__
#define __MY_SHARED_PTR_H__

template<class T>
class My_shared_ptr {
	void decrease() {
		if (*count <= 1) {
			delete count;
			delete m_obj;
			count = nullptr;
		} else (*count)--;
	}
	void increase() { (*count)++; }

	T* m_obj;
	int* count;
public:
	My_shared_ptr() : m_obj(nullptr), count(nullptr) {}

	My_shared_ptr(T* obj) : m_obj(obj), count(new int(1)) {}

	My_shared_ptr(const My_shared_ptr& rhs) : m_obj(rhs.m_obj), count(rhs.count) {
		increase();
	}

	~My_shared_ptr() {
		decrease();
		if (this->getCount() == 0) std::cout << "everything destroyed" << std::endl;
	}

	My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs) {
		if (count) decrease();
		m_obj = rhs.m_obj;
		count = rhs.count;
		increase();
		
	}

	const T* get_m_obj() { return this->m_obj; }

	int getCount() { return (this->count == nullptr) ? 0 : *(this->count); }
};

#endif
