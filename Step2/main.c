#include "step2.h"

int main(int argc, char const *argv[])
{

        int index;
        for (index = 2; index < argc; ++index)
        {
            getProcessInformation(argv[index]);
        }

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
