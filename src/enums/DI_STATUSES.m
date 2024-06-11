classdef DI_STATUSES < Simulink.IntEnumType
    enumeration 
        DI_UNKNOWN(0)
        DI_STS_INIT(1)
        DI_IDLE(2)
        DI_STARTUP(3)
        WAITING_FOR_DRVR(4)
        READY_TO_DRIVE_REQ(5)
        HV_START_REQ(6)
        DI_RUNNING(7)
        DI_ERROR(8)
    end
end