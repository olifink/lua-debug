#include "thunk_jit.h"

#if defined(_WIN32)
#	include "thunk_windows.inl"
#	if defined(_M_X64)
#		include "thunk_windows_amd64.inl"
#	else
#		include "thunk_windows_i386.inl"
#	endif
#else
#	include "thunk_posix.inl"
#	if defined(__ia64__)
#		include "thunk_posix_amd64.inl"
#	endif
#endif
