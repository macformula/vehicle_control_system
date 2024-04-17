classdef DI_CMD < Simulink.IntEnumType
    enumeration 
        DI_CMD_INIT(0)
        HV_ON(1)
        READY_TO_DRIVE(2)
        DI_SHUTDOWN(3)
        RUN_ERROR(4)
        DI_ERR_RESET(5)
    end
end