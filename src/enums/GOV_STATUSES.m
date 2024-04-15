classdef GOV_STATUSES < Simulink.IntEnumType
    enumeration 
        GOV_INIT(0)
        GOV_STARTUP(1)
        GOV_RUNNING(2)
        GOV_SHUTDOWN(3)
        HV_STARTUP_ERROR(4)
        MOTOR_STARTUP_ERROR(5)
        GOV_DI_ERROR(6)
        HV_RUN_ERROR(7)
        MOTOR_RUN_ERROR(8)
    end
end

