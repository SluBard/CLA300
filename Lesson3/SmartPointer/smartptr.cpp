/*
 * smartptr.cpp
 *
 *  Created on: Jun 14, 2020
 *      Author: student
 */

#include <iostream>

template <class T>
class smart_ptr{
public:
	smart_ptr(T* ptr = nullptr):m_ptr(ptr){

	}
	~smart_ptr(){
		delete m_ptr;
	}
	smrt_ptr(const smart_ptr& a){
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}
	smart_ptr& operator=(const smart_ptr& a){
		if (&a ==this)
			return *this;

		delete m_ptr;
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}
	T& operator*() const {return *m_ptr;}
	T* operator->() const {return m_ptr;}
	bool is_null() const {return m_ptr == nullptr; }
	/*
	smart_ptr(smart_ptr&& a):m_ptr(a.m_ptr){
		a.m_ptr = nullptr;
	}
	smart_ptr& operator=(smart_ptr&& a){
		if (&a==this)
			return *this;
		delete m_ptr;
		m_ptr = a.m_ptr;
		a.m_ptr=nullptr;
		return *this;
	*/
private:
	T* m_ptr{nullptr};
};

class Resource{
public:
		Resource() {std::cout << "Resource acquired\n"; }
		~Resource() {std::cout << "Resource released\n"; }
};

smart_ptr<Resource> createResource(){
	smart_ptr<Resource> res(new Resource);
	return res;
}

int main(){
	smart_ptr<Resource> the_res;
	the_res=createResource();
	return 0;
}

