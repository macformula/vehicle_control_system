#include "rte_plant_parameters.h"
#include "plant.h"
#include "plant_cal.h"

extern plant_cal_type plant_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&plant_cal_impl, (void**)&plant_cal, sizeof(plant_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
