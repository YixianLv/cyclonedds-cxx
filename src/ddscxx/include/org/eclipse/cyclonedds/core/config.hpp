/*
 * Copyright(c) 2006 to 2020 ADLINK Technology Limited and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */


/**
 * @file
 */

#ifndef CYCLONEDDS_CORE_CONFIG_HPP_
#define CYCLONEDDS_CORE_CONFIG_HPP_

#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif

#include <dds/core/macros.hpp>
#include <dds/core/types.hpp>

/** @internal Using a separate macro for org::opensplice in case we want to separate libs
later */
#define OSPL_ISOCPP_IMPL_API OMG_DDS_API

#endif /* CYCLONEDDS_CORE_CONFIG_HPP_ */