/*ckwg +29
 * Copyright 2019 by Kitware, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither name of Kitware, Inc. nor the names of any contributors may be used
 *    to endorse or promote products derived from this software without specific
 *    prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * \file
 * \brief Register multi-modal images.
 */

#include "extract_desc_ids_for_training_process.h"

#include <vital/vital_types.h>

#include <vital/types/timestamp_config.h>

#include <sstream>
#include <iostream>
#include <list>
#include <limits>
#include <cmath>


namespace viame
{

namespace core
{

create_config_trait( output_frames_without_match, bool, "true",
  "Output frames without any valid matches" );
create_config_trait( max_time_offset, double, "0.5",
  "The maximum time difference (s) under whitch two frames can be tested" );

//------------------------------------------------------------------------------
// Private implementation class
class extract_desc_ids_for_training_process::priv
{
public:
  priv();
  ~priv();

  bool test;
};

// =============================================================================

extract_desc_ids_for_training_process
::extract_desc_ids_for_training_process( kwiver::vital::config_block_sptr const& config )
  : process( config ),
    d( new extract_desc_ids_for_training_process::priv() )
{
  make_ports();
  make_config();
}


extract_desc_ids_for_training_process
::~extract_desc_ids_for_training_process()
{
}


// -----------------------------------------------------------------------------
void
extract_desc_ids_for_training_process
::_configure()
{
}


// -----------------------------------------------------------------------------
void
extract_desc_ids_for_training_process
::_step()
{
}


// -----------------------------------------------------------------------------
void
extract_desc_ids_for_training_process
::make_ports()
{
}


// -----------------------------------------------------------------------------
void
extract_desc_ids_for_training_process
::make_config()
{
}


// =============================================================================
extract_desc_ids_for_training_process::priv
::priv()
{
}


extract_desc_ids_for_training_process::priv
::~priv()
{
}


} // end namespace core

} // end namespace viame
