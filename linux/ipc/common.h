void log_error(const char* fmt, ...);
void log(const char* fmt, ...);
void error_exit(const char* fmt, ...);
void sys_error_exit(const char* fmt, ...);
void sys_warn(const char* fmt, ...);

void init_payload(int size);
void* get_payload();
int payload_size();
int verify_payload(const void*);

// mutex definitions
typedef void* mutex;
mutex create_mutex(const char* name, bool locked);
void destroy_mutex(const char* name, mutex m);
mutex open_mutex(const char* name); 
void close_mutex(mutex m);
void lock_mutex(mutex m);
bool trylock_mutex(mutex m);
bool lock_withtimeout_mutex(mutex m, int seconds);
void release_mutex(mutex m);
void unlock_mutex(mutex m);

void pipe();
void stdio();
void mutex_test();
void memmap();

