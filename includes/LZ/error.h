#ifndef ERROR_H
# define ERROR_H
# ifndef _WIN32
#  include "unistd.h"
# else
#  include <stdlib.h>
#  include <io.h>
# endif
# include <stdlib.h>

namespace lz
{
	int error(const char *error);
	int sever(const char *sever);
}

#endif
