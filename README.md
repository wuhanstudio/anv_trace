# anv_trace
RT-Thread 程序追踪软件包，帮助定位程序运行位置。

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

可以知道程序什么时候进入了哪个函数，有没有顺利退出。

    msh />
     \ | /
    - RT -     Thread Operating System
     / | \     4.0.3 build Feb 11 2021
     2006 - 2021 Copyright by rt-thread team
    msh />anv
    anv_trace_example
    msh />anv_trace_example
    == [MESSAGE] [                 FILENAME: LINE | FUNCTION            ] Begin Trace (1970/01/01 - 00:00:00)

    -- [Debug  ] [packages\anv-trace\anv_trace_example.c:   11 | anv_trace_example   ] << entering "anv_trace_example"
    -- [Debug  ] [packages\anv-trace\anv_trace_example.c:   12 | anv_trace_example   ] Hello Debug!
    -- [Info   ] [packages\anv-trace\anv_trace_example.c:   13 | anv_trace_example   ] Hello Info!
    -- [Warning] [packages\anv-trace\anv_trace_example.c:   14 | anv_trace_example   ] Hello Warning!
    -- [Error  ] [packages\anv-trace\anv_trace_example.c:   15 | anv_trace_example   ] Hello Error!
    -- [Fatal  ] [packages\anv-trace\anv_trace_example.c:   16 | anv_trace_example   ] Hello Fatal!
    -- [Debug  ] [packages\anv-trace\anv_trace_example.c:   17 | anv_trace_example   ] >> leaving  "anv_trace_example"

    == [MESSAGE] [                 FILENAME: LINE | FUNCTION            ] End Trace   (1970/01/01 - 00:00:00)
    msh />
