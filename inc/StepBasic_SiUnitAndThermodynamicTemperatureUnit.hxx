// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SiUnitAndThermodynamicTemperatureUnit_HeaderFile
#define _StepBasic_SiUnitAndThermodynamicTemperatureUnit_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx>

#include <Handle_StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepBasic_SiUnit.hxx>
#include <Handle_StepBasic_DimensionalExponents.hxx>
#include <Standard_Boolean.hxx>
#include <StepBasic_SiPrefix.hxx>
#include <StepBasic_SiUnitName.hxx>
class StepBasic_ThermodynamicTemperatureUnit;
class StepBasic_DimensionalExponents;



class StepBasic_SiUnitAndThermodynamicTemperatureUnit : public StepBasic_SiUnit
{

public:

  
  //! Returns a SiUnitAndThermodynamicTemperatureUnit
  Standard_EXPORT StepBasic_SiUnitAndThermodynamicTemperatureUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void Init (const Standard_Boolean hasAprefix, const StepBasic_SiPrefix aPrefix, const StepBasic_SiUnitName aName) ;
  
  Standard_EXPORT   void SetThermodynamicTemperatureUnit (const Handle(StepBasic_ThermodynamicTemperatureUnit)& aThermodynamicTemperatureUnit) ;
  
  Standard_EXPORT   Handle(StepBasic_ThermodynamicTemperatureUnit) ThermodynamicTemperatureUnit()  const;




  DEFINE_STANDARD_RTTI(StepBasic_SiUnitAndThermodynamicTemperatureUnit)

protected:




private: 


  Handle(StepBasic_ThermodynamicTemperatureUnit) thermodynamicTemperatureUnit;


};







#endif // _StepBasic_SiUnitAndThermodynamicTemperatureUnit_HeaderFile
