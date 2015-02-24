#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include "wxwidget.h"
#include "canvas.h"
#include "GridPane.h"

class MainWindow : public wxFrame
{
public:
  MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size);

private:
  void OnHelp(wxCommandEvent& event);
  void OnExit(wxCommandEvent& event);
  void OnAbout(wxCommandEvent& event);
  void OnInventory(wxCommandEvent& event);
  void OnDungeonTest(wxCommandEvent& event);
  void OnDisplayWorld(wxCommandEvent& event);
  void OnDisplayCubes(wxCommandEvent& event);

  wxDECLARE_EVENT_TABLE();

  std::shared_ptr<TestGLCanvas> testCanvas;
  std::shared_ptr<GridPane> gridPane;
};

#endif //_MAINWINDOW_H_
