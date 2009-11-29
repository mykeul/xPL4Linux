#ifdef _MSC_VER

#include "msvc-compat.h"

#include <stdlib.h>
#include <string.h>
#include <windows.h>


void bzero(void* buf, unsigned len)
{
	memset(buf, 0, len);
}

int poll(struct pollfd* fds, nfds_t nfds, int timeout)
{
	return WSAPoll(fds, nfds, timeout);
}

int random()
{
	return rand();
}

void syslog(int pri, char* fmt, ...)
{
}

void usleep(unsigned us)
{
	Sleep(us/1000);
}

#endif/*_MSC_VER*/
