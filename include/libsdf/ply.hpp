
#ifndef PLY_H
#define PLY_H

#include <string>
#include <vector>

#include <Eigen/Core>

// #include "vector_types.h"

// void write_to_ply( const std::string& file_name, const std::vector<float3>& vertices, const std::vector<int3>& triangles ) ;

void write_to_ply( const std::string& file_name, const Eigen::Matrix< float, 3, Eigen::Dynamic>& vertices ) ;

#endif