#ifndef SMART_H
#define SMART_H
template <typename T>
class Ptr
{
  T *_ptr;

  // Prevent copy contructor
  Ptr(const Ptr &);
  // Prevent assignmnet
  Ptr &operator=(const Ptr &);

public:
  /*
    https://www.geeksforgeeks.org/g-fact-93/
    In C++, if a class has a constructor which can be called with a single argument, 
    then this constructor becomes conversion constructor because such a constructor 
    allows conversion of the single argument to the class being constructed.
    
    We can avoid such implicit conversions as these may lead to unexpected results. We can make the constructor explicit with the help of explicit keyword. For example, if we try the following program that uses explicit keyword with constructor, we get compilation error.
  */
  explicit Ptr(T *p = 0) : _ptr(p) {}

  ~Ptr()
  {
    delete _ptr;
  }

  T *operator->()
  {
    if (!_ptr)
      _ptr = new T();
    return _ptr;
  }

  T &operator*() const
  {
    if (!_ptr)
      _ptr = new T();
    return *_ptr;
  }
};

#endif //SMART_H