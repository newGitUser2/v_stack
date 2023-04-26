#include "stack.hpp"
#include <iostream>
#include <typeinfo>

//Constructor, that takes parameter <size> and creates an array of this size.
Stack::Stack(int size) : m_size(size){
	m_array = new int[m_size];
        m_index = -1;
}

//Default constructor that creates an empty array.
Stack::Stack(){
	m_array = nullptr;
}

//Destructor that erases the array created in dynamic memory.
Stack::~Stack(){
	if(m_array)
		delete [] m_array;
}

//Returns the current size of the stack.
int Stack::get_size(){
	return m_size;
}

//Checking whether the stack is empty or not.
bool Stack::is_empty(){
	return m_index == -1;
}

//Checking whether the stack is full or not.
bool Stack::is_full(){
	int cnt = 0;
        for(int i = 0; i < m_size; i++){
        if(m_array[i])
        	cnt++;
      	}
        if(cnt == m_size)
        	return true;
       	else
        	return false;
}

//Transcribes stack elements into the second stack and deletes the first one.
void Stack::copy_array(int *array, int *new_array){
	int index = 0;
        while(array[index]){
        	new_array[index] = array[index];
                index++;
      	}
        delete [] array;
}

//Returns the current value of the m_index variable, which is the index of the element our <stack_array>.
int Stack::get_mIndex(){
	return m_index;
}

//It adds an element to the stack, checking whether the stack is empty or full.
void Stack::push(int data){
//	if(typeid(data).name() != "i")
//		throw "The argument <data> of the function must be an <int> value!";
	if(is_empty()){
       		m_array[++m_index] = data;
       	}else if(is_full()){
       		int *tmp_array = new int[m_size];
                copy_array(m_array, tmp_array);
                m_index = m_size;
                m_size *= 2;
              	m_array = new int[m_size];
                copy_array(tmp_array, m_array);
                m_array[m_index] = data;
     	}else{
             	m_array[++m_index] = data;
      	}
}

//Returns the last element added to the stack.
int Stack::top(){
	return m_array[m_index];
}

//Removed the last added element from the stack.
void Stack::pop(){
	int *tmp_array = new int[m_index];
        for(int i = 0; i < m_index; i++){
       		tmp_array[i] = m_array[i];
     	}
       	for(int i = 0; i < m_index; i++){
       		if(tmp_array[i])
          		std::cout << tmp_array[i] << " ";
  		}
     	delete [] m_array;
        m_array = new int[m_index];
       	m_index--;
       	copy_array(tmp_array, m_array);
        std::cout << std::endl;
}

//The composition of the current stack elements is displayed.
void Stack::print(){
	int index = 0;
        while(m_array[index]){
        	std::cout << m_array[index] << " ";
                index++;
     	}
        std::cout << std::endl;
}

