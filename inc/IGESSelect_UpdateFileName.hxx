// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_UpdateFileName_HeaderFile
#define _IGESSelect_UpdateFileName_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_UpdateFileName.hxx>

#include <IGESSelect_ModelModifier.hxx>
#include <Handle_IGESData_IGESModel.hxx>
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Sets the File Name in Header to be the actual name of the file
//! If new file name is unknown, the former one is kept
//! Remark : this works well only when it is Applied and send time
//! If it is run immediately, new file name is unknown and nothing
//! is done
//! The Selection of the Modifier is not used : it simply acts as
//! a criterium to select IGES Files to touch up
class IGESSelect_UpdateFileName : public IGESSelect_ModelModifier
{

public:

  
  //! Creates an UpdateFileName, which uses the system Date
  Standard_EXPORT IGESSelect_UpdateFileName();
  
  //! Specific action : only <target> is used : the system Date
  //! is set to Global Section Item n0 18.
  Standard_EXPORT   void Performing (IFSelect_ContextModif& ctx, const Handle(IGESData_IGESModel)& target, Interface_CopyTool& TC)  const;
  
  //! Returns a text which is
  //! "Updates IGES File Name to new current one"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_UpdateFileName)

protected:




private: 




};







#endif // _IGESSelect_UpdateFileName_HeaderFile
