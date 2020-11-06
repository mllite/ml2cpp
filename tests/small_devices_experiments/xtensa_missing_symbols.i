
#ifdef __xtensa__

#define DECLARE_NOOP_FUNCTION(f) void f() {}
#define DECLARE_NOOP_FUNCTION_NO_RETURN(f) void __attribute__( ( noreturn ) ) f() { do { } while(1); } ;

extern "C"{

DECLARE_NOOP_FUNCTION(__getreent)
DECLARE_NOOP_FUNCTION(_sbrk_r)
DECLARE_NOOP_FUNCTION_NO_RETURN(abort)

DECLARE_NOOP_FUNCTION(pthread_cond_broadcast)
DECLARE_NOOP_FUNCTION(pthread_cond_init)
DECLARE_NOOP_FUNCTION(pthread_cond_wait)
DECLARE_NOOP_FUNCTION(pthread_getspecific)
DECLARE_NOOP_FUNCTION(pthread_key_create)
DECLARE_NOOP_FUNCTION(pthread_key_delete)
DECLARE_NOOP_FUNCTION(pthread_mutexattr_destroy)
DECLARE_NOOP_FUNCTION(pthread_mutexattr_init)
DECLARE_NOOP_FUNCTION(pthread_mutexattr_settype)
DECLARE_NOOP_FUNCTION(pthread_mutex_destroy)
DECLARE_NOOP_FUNCTION(pthread_mutex_init)
DECLARE_NOOP_FUNCTION(pthread_mutex_lock)
DECLARE_NOOP_FUNCTION(pthread_mutex_unlock)
DECLARE_NOOP_FUNCTION(pthread_once)
DECLARE_NOOP_FUNCTION(pthread_setcancelstate)
DECLARE_NOOP_FUNCTION(pthread_setspecific)

DECLARE_NOOP_FUNCTION(_close_r)
DECLARE_NOOP_FUNCTION(_fcntl_r)
DECLARE_NOOP_FUNCTION(_fstat_r)
DECLARE_NOOP_FUNCTION(_lseek_r)
DECLARE_NOOP_FUNCTION(_open_r)
DECLARE_NOOP_FUNCTION(_read_r)
DECLARE_NOOP_FUNCTION(_write_r)
// DECLARE_NOOP_FUNCTION()

}

#endif // __xtensa__
