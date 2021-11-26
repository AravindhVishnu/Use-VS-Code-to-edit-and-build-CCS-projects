/*
 *  ======== main.c ========
 */

#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

static void taskFunction();

/*
 *  ======== taskFunction ========
 */
void taskFunction()
{
    while (1)
    {
        System_printf("enter taskFunction()\n");
        Task_sleep(1000);
        System_printf("exit taskFunction()\n");
    }
}

/*
 *  ======== main ========
 */
int main()
{ 
    /*
     * use ROV->SysMin to view the characters in the circular buffer
     */
    System_printf("Hello world\n");

    Error_Block eb;
    Task_Params taskParams;
    Task_Handle taskHandle;

    Error_init(&eb);
    Task_Params_init(&taskParams);
    taskParams.instance->name = "Test";
    taskParams.priority = 6;
    taskHandle = Task_create(taskFunction, &taskParams, &eb);
    if (taskHandle == NULL)
    {
        System_printf("ERROR, status: %d", eb.id);
        BIOS_exit(0);
    }

    BIOS_start();    /* does not return */
    return(0);
}
