#include <wchar.h>
#include <fcntl.h>
#include <io.h>

// This is the "Gold Standard" way for modern Windows C apps
_setmode(_fileno(stdout), _O_U16TEXT);
wprintf(L"White King: \u2654\n");