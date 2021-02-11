from building import *
import rtconfig

# get current directory
cwd     = GetCurrentDir()

# The set of source files associated with this SConscript file.

src = []

if GetDepend('ANV_TRACE_USING_EXAMPLE'):
	src    += Glob('anv_trace_example.c')

LOCAL_CCFLAGS = ''
path   =  [cwd]

group = DefineGroup('anv_trace', src, CPPPATH = path, depend = ['PKG_USING_ANV_TRACE'], LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
