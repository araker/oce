// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HatchGen_IntersectionPoint_HeaderFile
#define _HatchGen_IntersectionPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



class HatchGen_IntersectionPoint  {
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

  //! Sets the index of the supporting curve. <br>
  Standard_EXPORT     void SetIndex(const Standard_Integer Index) ;
  //! Returns the index of the supporting curve. <br>
  Standard_EXPORT     Standard_Integer Index() const;
  //! Sets the parameter on the curve. <br>
  Standard_EXPORT     void SetParameter(const Standard_Real Parameter) ;
  //! Returns the parameter on the curve. <br>
  Standard_EXPORT     Standard_Real Parameter() const;
  //! Sets the position of the point on the curve. <br>
  Standard_EXPORT     void SetPosition(const TopAbs_Orientation Position) ;
  //! Returns the position of the point on the curve. <br>
  Standard_EXPORT     TopAbs_Orientation Position() const;
  //! Sets the transition state before the intersection. <br>
  Standard_EXPORT     void SetStateBefore(const TopAbs_State State) ;
  //! Returns the transition state before the intersection. <br>
  Standard_EXPORT     TopAbs_State StateBefore() const;
  //! Sets the transition state after the intersection. <br>
  Standard_EXPORT     void SetStateAfter(const TopAbs_State State) ;
  //! Returns the transition state after of the intersection. <br>
  Standard_EXPORT     TopAbs_State StateAfter() const;
  //! Sets the flag that the point is the beginning of a segment. <br>
  Standard_EXPORT     void SetSegmentBeginning(const Standard_Boolean State = Standard_True) ;
  //! Returns the flag that the point is the beginning of a segment. <br>
  Standard_EXPORT     Standard_Boolean SegmentBeginning() const;
  //! Sets the flag that the point is the end of a segment. <br>
  Standard_EXPORT     void SetSegmentEnd(const Standard_Boolean State = Standard_True) ;
  //! Returns the flag that the point is the end of a segment. <br>
  Standard_EXPORT     Standard_Boolean SegmentEnd() const;
  //! Dump of the point on element. <br>
  Standard_EXPORT   virtual  void Dump(const Standard_Integer Index = 0) const = 0;





protected:

  //! Creates an empty intersection point. <br>
  Standard_EXPORT   HatchGen_IntersectionPoint();


Standard_Integer myIndex;
Standard_Real myParam;
TopAbs_Orientation myPosit;
TopAbs_State myBefore;
TopAbs_State myAfter;
Standard_Boolean mySegBeg;
Standard_Boolean mySegEnd;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif