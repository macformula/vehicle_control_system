classdef BM_STATUSES < Simulink.IntEnumType
    enumeration 
        BM_UNKNOWN(0)
        BM_INIT(1)
        BM_IDLE(2)
        BM_STARTUP(3)
        INIT_PRECHARGE(4)
        PRECHARGE(5)
        BM_RUNNING(6)
        HVIL_INTERRUPT(7)
        BM_LOW_SOC(8)
        ERR_RUNNING(9)
    end
end