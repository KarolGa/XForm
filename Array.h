#pragma once
#include <new>

template <class T>
class Array
{
private:
	T * m_pData;
	unsigned int m_nSize;
public:
	Array();
	Array(unsigned int);
	virtual ~Array();
	bool Set(unsigned int, const T&);
	T Get(unsigned int);
}; 

template <class T>
Array<T>::Array()
{
}


template <class T>
Array<T>::Array(unsigned int nSize) :m_nSize(nSize)
{
	if (m_nSize > 0)
		m_pData = new (std::nothrow) T[m_nSize];
}

template <class T>
 Array<T>:: ~Array()
{
	if (m_pData != NULL)
		delete m_pData;
}

template <class T>
bool Array<T>::Set(unsigned int nPos, const T& Value)
{
	if (nPos < m_nSize)
	{
		m_pData[nPos] = Value;
		return true;
	}
	else
		return false;
}

template <class T>
T Array<T>::Get(unsigned int nPos)
{
	if (nPos < m_nSize)
		return m_pData[nPos];
	else
		return T();
}
