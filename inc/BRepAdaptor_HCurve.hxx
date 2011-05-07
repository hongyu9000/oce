// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_HCurve_HeaderFile
#define _BRepAdaptor_HCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HCurve_HeaderFile
#include <Handle_BRepAdaptor_HCurve.hxx>
#endif

#ifndef _BRepAdaptor_Curve_HeaderFile
#include <BRepAdaptor_Curve.hxx>
#endif
#ifndef _Adaptor3d_HCurve_HeaderFile
#include <Adaptor3d_HCurve.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BRepAdaptor_Curve;
class Adaptor3d_Curve;



class BRepAdaptor_HCurve : public Adaptor3d_HCurve {

public:

  
  Standard_EXPORT   BRepAdaptor_HCurve();
  
  Standard_EXPORT   BRepAdaptor_HCurve(const BRepAdaptor_Curve& C);
  
  Standard_EXPORT     void Set(const BRepAdaptor_Curve& C) ;
  
  Standard_EXPORT    const Adaptor3d_Curve& Curve() const;
  
  Standard_EXPORT     Adaptor3d_Curve& GetCurve() ;
  
        BRepAdaptor_Curve& ChangeCurve() ;




  DEFINE_STANDARD_RTTI(BRepAdaptor_HCurve)

protected:


BRepAdaptor_Curve myCurve;


private: 




};

#define TheCurve BRepAdaptor_Curve
#define TheCurve_hxx <BRepAdaptor_Curve.hxx>
#define Adaptor3d_GenHCurve BRepAdaptor_HCurve
#define Adaptor3d_GenHCurve_hxx <BRepAdaptor_HCurve.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_BRepAdaptor_HCurve
#define Adaptor3d_GenHCurve_Type_() BRepAdaptor_HCurve_Type_()

#include <Adaptor3d_GenHCurve.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_hxx
#undef Handle_Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif