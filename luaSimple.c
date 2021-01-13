#include <stdio.h>
#include "lauxlib.h"
#include "lualib.h"

int main(int argc, char ** argv)
{
    char * file = NULL;
    if (argc == 0)
    {
        return -1;
    }
    else
    {
        file = argv[1];
    }

    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    if (! luaL_dofile(L, file))
    {
        printf("error dofile!");
        return -1;
    }
    return 0;
}