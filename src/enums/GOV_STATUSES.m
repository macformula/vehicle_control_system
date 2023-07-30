classdef GOV_STATUSES < Simulink.IntEnumType
    enumeration 
        GOV_INIT(0)
        GOV_STARTUP(1)
        GOV_RUNNING(2)
        HV_STARTUP_ERROR(3)
        MOTOR_STARTUP_ERROR(4)
        GOV_DI_ERROR(5)
        HV_RUN_ERROR(6)
        MOTOR_RUN_ERROR(7)
    end
end

