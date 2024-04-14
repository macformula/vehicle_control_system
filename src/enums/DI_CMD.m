classdef DI_CMD < Simulink.IntEnumType
    enumeration 
        DI_CMD_INIT(0)
        HV_ON(1)
        READY_TO_DRIVE(2)
        SYSTEM_ERROR(3)
        DI_ERR_RESET(4)
    end
end