/* Main generated for Simulink Real-Time model controller_sg */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "controller_sg.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(controller_sg_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo controller_sg_Info =
{
    "controller_sg",
    controller_sg_initialize,
    controller_sg_terminate,
    []()->char const*& { return controller_sg_M->errorStatus; },
    []()->unsigned char& { return controller_sg_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::SegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, controller_sg_Info);
}
