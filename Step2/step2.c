#include "step2.h"

void getProcessInformation(char pid[])
{
    FILE *inFile;
    int i = 1;
    char line[200];
    prInf pi;
    char path[] = "/proc/";
    char completeFilePath[10]="";
    char status[] = "/status";
    strcat(completeFilePath, path);
    strcat(completeFilePath, pid);
    strcat(completeFilePath, status);
    inFile = fopen(completeFilePath, "r");
    if (inFile == NULL)
    {
        printf("No se puede abrir el archivo: %s\n", completeFilePath);
        (pi.cci.volunteers) = " ";
        (pi.cci.nonVolunteers) = " ";
        (pi.msi.vmData)=" ";
        (pi.msi.vmData) = " ";
        (pi.msi.vmExe) = " ";
        (pi.msi.vmStk) = " ";
        (pi.processName) = " ";
        (pi.processState) = " ";
    }
    else
    {
        printf("\npid:%s\n",pid);
        while (fgets(line,30, inFile) != NULL)
        {
            if(line[0]=='N' && line[1]=='a'){
                (pi.processName) = line;
                printf("%s",(pi.processName));  
            }
            if(line[0]=='S' && line[1]=='t'){
                (pi.processState) = line;
                printf("%s",(pi.processState));
            }
            if(line[0]=='V' && line[1]=='m' && line[2]=='S' && line[3]=='i'){
                (pi.msi.vmSize)=line;
                printf("%s",(pi.msi.vmSize));
            }
            if(line[0]=='V' && line[1]=='m' && line[2]=='D'){
                (pi.msi.vmData) = line;
                printf("%s",(pi.msi.vmData));
            }
            if(line[0]=='V' && line[1]=='m' && line[2]=='S' && line[3]=='t'){
                (pi.msi.vmStk) = line;
                printf("%s",(pi.msi.vmStk));
            }
            if(line[0]=='V' && line[1]=='m' && line[2]=='E'){
                (pi.msi.vmExe) = line;
                printf("%s",(pi.msi.vmExe));
            }
            if(line[0]=='v'){
                (pi.cci.volunteers) = line;
                printf("%s",(pi.cci.volunteers));
            }
            if(line[0]=='n'){
                (pi.cci.nonVolunteers) = line;
                printf("%s\n",(pi.cci.nonVolunteers));

            }
            /*
            switch (i)
            {
            case 1:
                (pi.processName) = line;
                printf("%s",(pi.processName));
                break;
            case 3:
                (pi.processState) = line;
                printf("%s",(pi.processState));
                break;
            case 18:
                (pi.msi.vmSize)=line;
                printf("%s",(pi.msi.vmSize));
                break;
            case 26:
                (pi.msi.vmData) = line;
                printf("%s",(pi.msi.vmData));
                break;
            case 27:
                (pi.msi.vmStk) = line;
                printf("%s",(pi.msi.vmStk));
                break;
            case 28:
                (pi.msi.vmExe) = line;
                printf("%s",(pi.msi.vmExe));
                break;
            case 62:
                (pi.cci.volunteers) = line;
                printf("%s\n",(pi.cci.volunteers));
                break;
            case 64:
                (pi.cci.nonVolunteers) = line;
                printf("%s\n",(pi.cci.nonVolunteers));
                break;
            }
            i++;*/
        }
        fclose(inFile);
    }
}