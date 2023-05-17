#pragma once
template <class T>
class T_list {
protected:
	T* items;
	int n;
public:
	T_list();
	~T_list();
	void Add(T& item);
	void Print_Info()const;

};
template<class T>
T_list<T>::T_list() {
	n = 0;
	items = new T[10];
}
template<class T>
T_list<T>::~T_list() {
	delete[] items;
}
template<class T>
void T_list<T>::Print_Info()const {
	for (int i = 0; i < n; i++) {
		items[i].Print_Info();
	}
}
template<class T>
void T_list<T>::Add(T& item) {
	items[n] = item;
	n++;
}