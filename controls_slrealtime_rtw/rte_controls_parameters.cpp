#include "rte_controls_parameters.h"
#include "controls.h"
#include "controls_cal.h"

extern controls_cal_type controls_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&controls_cal_impl, (void**)&controls_cal, sizeof(controls_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
