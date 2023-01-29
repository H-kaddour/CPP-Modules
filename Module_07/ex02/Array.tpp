// **************************************************************************** //
//                                                                              //
//                                                         :::      ::::::::    //
//    Array.tpp                                          :+:      :+:    :+:    //
//                                                     +:+ +:+         +:+      //
//    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         //
//                                                 +#+#+#+#+#+   +#+            //
//    Created: 2023/01/29 12:27:42 by hkaddour          #+#    #+#              //
//    Updated: 2023/01/29 16:48:02 by hkaddour         ###   ########.fr        //
//                                                                              //
// **************************************************************************** //

#pragma once

template <typename T>
Array<T>::Array(void) : _size(0)
{
  std::cout << "Default Constructer called!" <<  std::endl;
	this->arr = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
  std::cout << "Init Constructer called!" << std::endl;
	this->arr = new T[n];
}

template <typename T>
Array<T>::Array(Array & obj)
{
  std::cout << "Copy Constructer called!" << std::endl;
  this->arr = new T[obj.size()];
	*this = obj;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & obj)
{
  std::cout << "Copy assignment called!" << std::endl;
  this->_size = obj._size;
	for (unsigned int i = 0; i < this->_size; i++)
		this->arr[i] = obj.arr[i];
	return (*this);
}

template <typename T>
T	& Array<T>::operator[](int i)
{
  if (i >= 0 && i <= this->size())
    return (this->arr[i]);
  throw (std::out_of_range("Array index out of bound."));
}

template <typename T>
int	Array<T>::size(void)
{
	return (this->_size);
}

template <typename T>
Array<T>::~Array(void)
{
  std::cout << "Default Destructor called!" <<  std::endl;
  delete this->arr;
}
