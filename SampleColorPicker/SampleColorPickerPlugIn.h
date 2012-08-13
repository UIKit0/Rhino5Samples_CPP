/////////////////////////////////////////////////////////////////////////////
// SampleColorPickerPlugIn.h : main header file for the SampleColorPicker plug-in
//

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CSampleColorPickerPlugIn
// See SampleColorPickerPlugIn.cpp for the implementation of this class
//

class CSampleColorPickerPlugIn : public CRhinoUtilityPlugIn
{
public:
  CSampleColorPickerPlugIn();
  ~CSampleColorPickerPlugIn();

  // Required overrides
  const wchar_t* PlugInName() const;
  const wchar_t* PlugInVersion() const;
  GUID PlugInID() const;
  BOOL OnLoadPlugIn();
  void OnUnloadPlugIn();

private:
  ON_wString m_plugin_version;

  // TODO: Add additional class information here
};

CSampleColorPickerPlugIn& SampleColorPickerPlugIn();



