
#ifndef VRISKA_LIB_THREADS_MUTEX_H_
# define VRISKA_LIB_THREADS_MUTEX_H_

# include <Vriska/Threads/ILockable.h>
# include <Vriska/Threads/INativeMutex.h>

#ifdef VRISKA_WINDOWS
# pragma warning( push )
# pragma warning( disable : 4275 )
#endif

namespace Vriska
{
  class VRISKA_EXPORT Mutex : public ILockable
  {
  public:
    Mutex();
    virtual ~Mutex();

  private:
    Mutex(Mutex const & other);
    Mutex const &	operator=(Mutex const & other);

  public:
    virtual bool	lock();
    virtual bool	tryLock();
    virtual bool	unlock();

  public:
    virtual INativeMutex&	getNative();

  private:
    INativeMutex&	_mutex;
  };
}

#ifdef VRISKA_WINDOWS
# pragma warning( pop )
#endif

#endif // !VRISKA_LIB_THREADS_MUTEX_H_
