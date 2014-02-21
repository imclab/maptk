/*ckwg +5
 * Copyright 2013-2014 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */

/**
 * \file
 * \brief VXL homography estimation algorithm
 */

#ifndef MAPTK_VXL_ESTIMATE_HOMOGRAPHY_H_
#define MAPTK_VXL_ESTIMATE_HOMOGRAPHY_H_

#include "vxl_config.h"

#include <maptk/core/algo/estimate_homography.h>

namespace maptk
{

namespace vxl
{

/// A class that uses RREL in VXL to estimate a homography from matching 2D points
class MAPTK_VXL_EXPORT estimate_homography
  : public algo::algorithm_impl<estimate_homography, algo::estimate_homography>
{
public:
  /// Return the name of this implementation
  std::string impl_name() const { return "vxl"; }

  // No configuration yet for this class.
  /// \cond DoxygenSuppress
  virtual void set_configuration(config_block_sptr /*config*/) {}
  virtual bool check_configuration(config_block_sptr /*config*/) const { return true; }
  /// \endcond

  /// Estimate a homography matrix from corresponding points
  /**
   * \param [in]  pts1 the vector or corresponding points from the source image
   * \param [in]  pts2 the vector of corresponding points from the destination image
   * \param [out] inliers for each point pair, the value is true if
   *                      this pair is an inlier to the homography estimate
   * \param [in]  inlier_scale error distance tolerated for matches to be inliers
   */
  virtual matrix_3x3d
  estimate(const std::vector<vector_2d>& pts1,
           const std::vector<vector_2d>& pts2,
           std::vector<bool>& inliers,
           double inlier_scale = 1.0) const;

};


} // end namespace vxl

} // end namespace maptk


#endif // MAPTK_VXL_ESTIMATE_HOMOGRAPHY_H_
