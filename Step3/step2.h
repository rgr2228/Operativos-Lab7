#ifndef STEP1_H_
#define STEP1_H_

#include <stdio.h>
#include <ctype.h>
#include "string.h"

typedef struct ContextChangesInformation
{
    char *volunteers;
    char *nonVolunteers;
}ctxChgInf;

typedef struct MemorySizeInformation
{
    char *vmSize;
    char *vmExe;
    char *vmData;
    char *vmStk;
}memSizeInf;

typedef struct ProcessInformation
{
    char *processName;
    char *processState;
    memSizeInf msi;
    ctxChgInf cci;
}prInf;

void getProcessInformation(char pid[],FILE *);



#endif