/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(constellation_soft_decoder_cf.h) */
/* BINDTOOL_HEADER_FILE_HASH(cd6de30255a8fe809910a3d7bd23c8de)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/constellation_soft_decoder_cf.h>
// pydoc.h is automatically generated in the build directory
#include <constellation_soft_decoder_cf_pydoc.h>

void bind_constellation_soft_decoder_cf(py::module& m)
{

    using constellation_soft_decoder_cf = ::gr::digital::constellation_soft_decoder_cf;


    py::class_<constellation_soft_decoder_cf,
               gr::sync_interpolator,
               std::shared_ptr<constellation_soft_decoder_cf>>(
        m, "constellation_soft_decoder_cf", D(constellation_soft_decoder_cf))

        .def(py::init(&constellation_soft_decoder_cf::make),
             py::arg("constellation"),
             py::arg("npwr") = -1,
             D(constellation_soft_decoder_cf, make))


        .def("set_npwr",
             &constellation_soft_decoder_cf::set_npwr,
             py::arg("npwr"),
             D(constellation_soft_decoder_cf, set_npwr))


        .def("set_constellation",
             &constellation_soft_decoder_cf::set_constellation,
             py::arg("constellation"),
             D(constellation_soft_decoder_cf, set_constellation))

        ;
}
