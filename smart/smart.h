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
  explicit Ptr(T *p = 0) : _ptr(p) {}

  ~Ptr()
  {
    delete _ptr;
  }

  T *operator->() const
  {
    return _ptr;
  }

  T &operator*() const
  {
    return *_ptr;
  }
};

#endif //SMART_H