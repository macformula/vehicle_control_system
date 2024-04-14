classdef BM_CMD < Simulink.IntEnumType
    enumeration 
        BM_CMD_INIT(0)
        HV_STARTUP(1)
        HV_SHUTDOWN(2)
    end
end