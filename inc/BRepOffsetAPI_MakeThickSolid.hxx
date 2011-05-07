// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_MakeThickSolid_HeaderFile
#define _BRepOffsetAPI_MakeThickSolid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepOffsetAPI_MakeOffsetShape_HeaderFile
#include <BRepOffsetAPI_MakeOffsetShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepOffset_Mode_HeaderFile
#include <BRepOffset_Mode.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_JoinType_HeaderFile
#include <GeomAbs_JoinType.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;


//! Describes functions to build hollowed solids. <br>
//! A hollowed solid is built from an initial solid and a set of <br>
//! faces on this solid, which are to be removed. The <br>
//! remaining faces of the solid become the walls of the <br>
//! hollowed solid, their thickness defined at the time of construction. <br>
//!        the solid is built from an initial <br>
//!          solid  <S> and a  set of  faces {Fi} from  <S>, <br>
//!          builds a   solid  composed  by two shells closed  by <br>
//!          the {Fi}. First shell <SS>   is composed by all <br>
//!          the faces of <S> expected {Fi}.  Second shell is <br>
//!          the offset shell of <SS>. <br>
//! A MakeThickSolid object provides a framework for: <br>
//! - defining the cross-section of a hollowed solid, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the result. <br>
class BRepOffsetAPI_MakeThickSolid  : public BRepOffsetAPI_MakeOffsetShape {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   BRepOffsetAPI_MakeThickSolid();
  //!  Constructs a hollowed solid from <br>
//! the solid S by removing the set of faces ClosingFaces from S, where: <br>
//!       Offset defines the thickness of the walls. Its sign indicates <br>
//!   which side of the surface of the solid the hollowed shape is built on; <br>
//!  - Tol defines the tolerance criterion for coincidence in generated shapes; <br>
//!  - Mode defines the construction type of parallels applied to free <br>
//!   edges of shape S. Currently, only one construction type is <br>
//!   implemented, namely the one where the free edges do not generate <br>
//!   parallels; this corresponds to the default value BRepOffset_Skin; <br>
//!   Intersection specifies how the algorithm must work in order to <br>
//!   limit the parallels to two adjacent shapes: <br>
//! - if Intersection is false (default value), the intersection <br>
//!   is calculated with the parallels to the two adjacent shapes, <br>
//!  -     if Intersection is true, the intersection is calculated by <br>
//!   taking account of all parallels generated; this computation <br>
//!   method is more general as it avoids self-intersections <br>
//!   generated in the offset shape from features of small dimensions <br>
//!   on shape S, however this method has not been completely <br>
//!   implemented and therefore is not recommended for use; <br>
//!  -     SelfInter tells the algorithm whether a computation to <br>
//!   eliminate self-intersections needs to be applied to the <br>
//!   resulting shape. However, as this functionality is not yet <br>
//!   implemented, you should use the default value (false); <br>
//!  - Join defines how to fill the holes that may appear between <br>
//!   parallels to the two adjacent faces. It may take values <br>
//!   GeomAbs_Arc or GeomAbs_Intersection: <br>
//! - if Join is equal to GeomAbs_Arc, then pipes are generated <br>
//!           between two free edges of two adjacent parallels, <br>
//!           and spheres are generated on "images" of vertices; <br>
//!           it is the default value, <br>
//! - if Join is equal to GeomAbs_Intersection, <br>
//!   then the parallels to the two adjacent faces are <br>
//!   enlarged and intersected, so that there are no free <br>
//!   edges on parallels to faces. <br>
//!   Warnings <br>
//! Since the algorithm of MakeThickSolid is based on <br>
//! MakeOffsetShape algorithm, the warnings are the same as for <br>
//! MakeOffsetShape. <br>
  Standard_EXPORT   BRepOffsetAPI_MakeThickSolid(const TopoDS_Shape& S,const TopTools_ListOfShape& ClosingFaces,const Standard_Real Offset,const Standard_Real Tol,const BRepOffset_Mode Mode = BRepOffset_Skin,const Standard_Boolean Intersection = Standard_False,const Standard_Boolean SelfInter = Standard_False,const GeomAbs_JoinType Join = GeomAbs_Arc);
  //! Builds the resulting shape (redefined from MakeOffsetShape). <br>
  Standard_EXPORT   virtual  void Build() ;
  //! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& S) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif