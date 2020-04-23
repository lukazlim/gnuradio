/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/pm_remez.h>
// pydoc.h is automatically generated in the build directory
#include <pm_remez_pydoc.h>

void bind_pm_remez(py::module& m)
{


    m.def("pm_remez",
          &::gr::filter::pm_remez,
          py::arg("order"),
          py::arg("bands"),
          py::arg("ampl"),
          py::arg("error_weight"),
          py::arg("filter_type") = "bandpass",
          py::arg("grid_density") = 16,
          D(pm_remez));
}
