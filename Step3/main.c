#include "step2.h"

int main(int argc, char const *argv[])
{
    FILE *inFile;
    char l[] = "-r";
    char ruta[100] = "psinfo-report-";
    for (int i = 2; i < argc; i++)
        {
            strcat(ruta, argv[i]);
            strcat(ruta, "-");
        }
        strcat(ruta, ".info");
    if (strcmp("-r", argv[1]) == 0)
    {
        inFile = fopen(ruta, "wt");
        int index;
        for (index = 2; index < argc; ++index)
        {
            getProcessInformation(argv[index],inFile);
        }
    }
    else
    {
        inFile = fopen(ruta, "wt");
        if (argc > 2)
        {
            printf("Invalid format command line.\n");
        }
        else{
            getProcessInformation(argv[1],inFile);
        }
    }
    fclose(inFile);
    /*printf("%s",(pi.processName));
    printf("%s",(pi.processState));
    printf("%s",(pi.msi.vmSize));
    printf("%s",(pi.msi.vmExe));
    printf("%s",(pi.msi.vmData));
    printf("%s",(pi.msi.vmStk));
    printf("%s",(pi.cci.volunteers));
    printf("%s",(pi.cci.nonVolunteers));*/
    return 0;
}
