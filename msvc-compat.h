#ifndef _MSVC_COMPAT_H_
#define _MSVC_COMPAT_H_

#include <io.h>
#include <process.h>
#include <winsock2.h>

#define LOG_EMERG       0       /* system is unusable */
#define LOG_ALERT       1       /* action must be taken immediately */
#define LOG_CRIT        2       /* critical conditions */
#define LOG_ERR         3       /* error conditions */
#define LOG_WARNING     4       /* warning conditions */
#define LOG_NOTICE      5       /* normal but significant condition */
#define LOG_INFO        6       /* informational */
#define LOG_DEBUG       7       /* debug-level messages */

typedef unsigned long int nfds_t;
typedef int pid_t;
typedef int socklen_t;
typedef unsigned uint32_t;

void bzero(void* buf, unsigned len);
int poll(struct pollfd* fds, nfds_t nfds, int timeout);
int random();
void syslog(int, char*, ...);
void usleep(unsigned us);

#endif//_MSVC_COMPAT_H_