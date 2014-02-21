/*ckwg +5
 * Copyright 2013-2014 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */

/**
 * \file
 * \brief PROJ algorithm registration interface
 */

#ifndef MAPTK_PROJ_REGISTER_H_
#define MAPTK_PROJ_REGISTER_H_

#include "proj_config.h"

namespace maptk
{

namespace proj
{

/// register all algorithms in this module
MAPTK_PROJ_EXPORT void register_algorithms();


} // end namespace proj

} // end namespace maptk


#endif // MAPTK_PROJ_REGISTER_H_
