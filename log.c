#include <stdio.h>
#include <stdarg.h>

#include "log.h"

void warn(const char *fmt, ...) {
	va_list ap;

	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);

	fprintf(stderr, "\n");
}
