#ifndef FUSE_H
#define FUSE_H

#include"../SimpleFS/CSimpleFS.h"

int StartFuse(int argc, char *argv[], const char* mountpoint, SimpleFilesystem &fs);
int StopFuse();

#endif
