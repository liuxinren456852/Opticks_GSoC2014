//* CLASS USED TO GENERATE A DEM FROM THE ORIGINAL LAS FILE
//* FOR NOW IT SUPORTS ONLY THE NEARESTR NEIGHBOR INTERPOLATION METHOD, BUT IN FUTURE OTHER INTERPOLATION METHODS COULD BE ADDED

/*
 * The information in this file is
 * Copyright(c) 2007 Ball Aerospace & Technologies Corporation
 * and is subject to the terms and conditions of the
 * GNU Lesser General Public License Version 2.1
 * The license text is available from   
 * http://www.gnu.org/licenses/lgpl.html
 */

#pragma once
#include "PointCloudAccessor.h"
#include "PointCloudAccessorImpl.h"
#include "PointCloudDataDescriptor.h"
#include "PointCloudDataRequest.h"
#include "PointCloudElement.h"
//#include "PointCloudView.h"
#include "ProgressTracker.h"
//#include "PseudocolorLayer.h"
#include "RasterElement.h"
//#include "RasterUtilities.h"
#include "SpatialDataView.h"
#include "SpatialDataWindow.h"
#include "Statistics.h"
//#include "switchOnEncoding.h" 
#include "Undo.h"
//#include <limits>
#include <Eigen/Core> //http://eigen.tuxfamily.org/index.php?title=Visual_Studio
//#include <Eigen/Eigenvalues>
#include "StringUtilities.h"
//#include <iostream>
#include <fstream>
// needed by the Raster generator
#include "DataRequest.h"
//#include "AlgorithmShell.h"
//#include "DesktopServices.h"
#include "DataAccessor.h"
#include "DataAccessorImpl.h"

class Interpolation
{
public:
	Interpolation(void);
	~Interpolation(void);
	std::string interpolation_msg;
	Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> Interpolation::generate_DEM(PointCloudElement* pElement, float post_spacing);
	bool Interpolation::print_DEM_on_file(std::string name_file, Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> dem_RM);
};


