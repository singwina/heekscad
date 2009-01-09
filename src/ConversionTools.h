// ConversionTools.h
#include "../interface/Tool.h"

class ConvertSketchToFace: public Tool
{
public:
	void Run();
	const wxChar* GetTitle(){return _("Convert Sketch To Face");}
	wxString BitmapPath(){return _T("la2face");}
	const wxChar* GetToolTip(){return _("Convert sketch to face");}
};

class CombineSketches: public Tool
{
public:
	void Run();
	const wxChar* GetTitle(){return _("Combine sketches");}
	wxString BitmapPath(){return _T("sketchjoin");}
	const wxChar* GetToolTip(){return _("Combine selected sketches");}
};

void GetConversionMenuTools(std::list<Tool*>* t_list);
