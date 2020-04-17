// Copyright (c) 2018 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Graphic3d_FrameStatsCounter_HeaderFile
#define _Graphic3d_FrameStatsCounter_HeaderFile

//! Stats counter.
enum Graphic3d_FrameStatsCounter
{
  Graphic3d_FrameStatsCounter_NbLayers = 0,           //!< number of ZLayers
  Graphic3d_FrameStatsCounter_NbLayersNotCulled,      //!< number of not culled ZLayers
  Graphic3d_FrameStatsCounter_NbStructs,              //!< number of defined OpenGl_Structure
  Graphic3d_FrameStatsCounter_NbStructsNotCulled,     //!< number of not culled OpenGl_Structure
  Graphic3d_FrameStatsCounter_NbGroupsNotCulled,      //!< number of not culled OpenGl_Group
  Graphic3d_FrameStatsCounter_NbElemsNotCulled,       //!< number of not culled OpenGl_Element
  Graphic3d_FrameStatsCounter_NbElemsFillNotCulled,   //!< number of not culled OpenGl_PrimitiveArray drawing triangles
  Graphic3d_FrameStatsCounter_NbElemsLineNotCulled,   //!< number of not culled OpenGl_PrimitiveArray drawing lines
  Graphic3d_FrameStatsCounter_NbElemsPointNotCulled,  //!< number of not culled OpenGl_PrimitiveArray drawing points
  Graphic3d_FrameStatsCounter_NbElemsTextNotCulled,   //!< number of not culled OpenGl_Text
  Graphic3d_FrameStatsCounter_NbTrianglesNotCulled,   //!< number of not culled (as structure) triangles
  Graphic3d_FrameStatsCounter_NbLinesNotCulled,       //!< number of not culled (as structure) line segments
  Graphic3d_FrameStatsCounter_NbPointsNotCulled,      //!< number of not culled (as structure) points
  //Graphic3d_FrameStatsCounter_NbGlyphsNotCulled,    //!< number glyphs, to be considered in future
  Graphic3d_FrameStatsCounter_EstimatedBytesGeom,     //!< estimated GPU memory used for geometry
  Graphic3d_FrameStatsCounter_EstimatedBytesFbos,     //!< estimated GPU memory used for FBOs
  Graphic3d_FrameStatsCounter_EstimatedBytesTextures, //!< estimated GPU memory used for textures
};
enum { Graphic3d_FrameStatsCounter_NB = Graphic3d_FrameStatsCounter_EstimatedBytesTextures + 1 };

#endif // _Graphic3d_FrameStatsCounter_HeaderFile
