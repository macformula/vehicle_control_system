classdef MI_STATUSES < Simulink.IntEnumType
    enumeration 
        UNKNOWN(0)
        STS_INIT(1)
        STARTUP(2)
        READY(3)
        RUNNING(4)
        SHUTDOWN(5)
        MI_STS_ERROR(6)
        OFF(7)
    end
end