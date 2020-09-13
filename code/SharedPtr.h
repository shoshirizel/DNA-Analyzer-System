//
// Created by shoshi on 7/19/20.
//

#ifndef SMART_PTR_SHAREDPTR_H
#define SMART_PTR_SHAREDPTR_H

#include <cstddef>


template<typename T>
class SharedPtr {
public:
    explicit SharedPtr(T* ptr);
    ~SharedPtr();

    template<typename U>
    SharedPtr(SharedPtr<U>& other);

    template<typename U>
    SharedPtr<T>& operator=(SharedPtr<U>& other);

    T& operator*() const;
    T* operator->() const;
    operator bool();
    T* get() const;
    size_t *getCounter() const;
    void reset(T* ptr = NULL);

private:
    void deleteIfNeeded();

    size_t* m_counter;
    T* m_ptr;
};

template <typename T>
inline SharedPtr<T>::SharedPtr(T *ptr): m_counter(new size_t), m_ptr(ptr){*m_counter = 1;}

template <typename T>
template <typename U>
inline SharedPtr<T>::SharedPtr(SharedPtr<U>& other): m_counter(other.getCounter()), m_ptr(other.get()){*m_counter += 1;}

template <typename T>
inline SharedPtr<T>::~SharedPtr<T>()
{
    deleteIfNeeded();
}

template <typename T>
template <typename U>
SharedPtr<T>& SharedPtr<T>::operator=(SharedPtr<U> &other)
{
    if (&other != this)
    {
        deleteIfNeeded();
        m_counter = other.getCounter();
        (*m_counter)++;
        m_ptr = other.get();
    }

    return *this;
}

template <typename T>
inline T& SharedPtr<T>::operator*() const {return *m_ptr;}

template <typename T>
inline SharedPtr<T>::operator bool()
{
    return m_ptr? true: false;
}

template <typename T>
T* SharedPtr<T>::get() const {return m_ptr;}

template <typename T>
size_t* SharedPtr<T>::getCounter() const {return m_counter;}

template<typename T>
inline T* SharedPtr<T>::operator->() const {return m_ptr;}


template<typename T>
inline void SharedPtr<T>::reset(T *ptr)
{
    if (ptr != m_ptr)
    {
        deleteIfNeeded();
        m_ptr = ptr;
        m_counter = new size_t;
        *m_counter = 1;
    }
}

template <typename T>
void SharedPtr<T>::deleteIfNeeded()
{
    if (--(*m_counter) == 0)
    {
        delete m_ptr;
        delete m_counter;
    }
}

#endif //SMART_PTR_SHAREDPTR_H