#include <rtthread.h>
#include <stdio.h>

#define ANV_TRACE_IMPLEMENTATION
#include <anv_trace.h>

int anv_trace_example(int argc, char const *argv[])
{
    anv_trace_init(stdout);

    anv_trace_enter();
    anv_traced("Hello %s!", "Debug");
    anv_tracei("Hello %s!", "Info");
    anv_tracew("Hello %s!", "Warning");
    anv_tracee("Hello %s!", "Error");
    anv_tracef("Hello %s!", "Fatal");
    anv_trace_leave();

    anv_trace_quit();

	return 0;
}
MSH_CMD_EXPORT(anv_trace_example, anv trace example);
