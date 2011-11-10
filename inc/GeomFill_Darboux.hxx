// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Darboux_HeaderFile
#define _GeomFill_Darboux_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_Darboux_HeaderFile
#include <Handle_GeomFill_Darboux.hxx>
#endif

#ifndef _GeomFill_TrihedronLaw_HeaderFile
#include <GeomFill_TrihedronLaw.hxx>
#endif
#ifndef _Handle_GeomFill_TrihedronLaw_HeaderFile
#include <Handle_GeomFill_TrihedronLaw.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Standard_OutOfRange;
class Standard_ConstructionError;
class GeomFill_TrihedronLaw;
class gp_Vec;
class TColStd_Array1OfReal;


//! Defines Darboux case of Frenet Trihedron Law <br>
class GeomFill_Darboux : public GeomFill_TrihedronLaw {

public:

  
  Standard_EXPORT   GeomFill_Darboux();
  
  Standard_EXPORT   virtual  Handle_GeomFill_TrihedronLaw Copy() const;
  //! compute Triedrhon on curve at parameter <Param> <br>
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,gp_Vec& Tangent,gp_Vec& Normal,gp_Vec& BiNormal) ;
  //! compute Triedrhon and  derivative Trihedron  on curve <br>
//!          at parameter <Param> <br>
//!  Warning : It used only for C1 or C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D1(const Standard_Real Param,gp_Vec& Tangent,gp_Vec& DTangent,gp_Vec& Normal,gp_Vec& DNormal,gp_Vec& BiNormal,gp_Vec& DBiNormal) ;
  //! compute  Trihedron on curve <br>
//!          first and seconde  derivatives. <br>
//!  Warning : It used only for C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D2(const Standard_Real Param,gp_Vec& Tangent,gp_Vec& DTangent,gp_Vec& D2Tangent,gp_Vec& Normal,gp_Vec& DNormal,gp_Vec& D2Normal,gp_Vec& BiNormal,gp_Vec& DBiNormal,gp_Vec& D2BiNormal) ;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. <br>
//!          May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT   virtual  Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT   virtual  void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Get average value of Tangent(t) and Normal(t) it is usfull to <br>
//!          make fast approximation of rational  surfaces. <br>
  Standard_EXPORT   virtual  void GetAverageLaw(gp_Vec& ATangent,gp_Vec& ANormal,gp_Vec& ABiNormal) ;
  //! Say if the law is Constant. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConstant() const;
  //! Return False. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsOnlyBy3dCurve() const;




  DEFINE_STANDARD_RTTI(GeomFill_Darboux)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif