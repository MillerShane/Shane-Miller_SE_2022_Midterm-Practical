#pragma once
#include"wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
	int rng = randGen();


public:

	wxTextCtrl* mainText = nullptr;

	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* button4 = nullptr;


	int randGen();

	std::string qFactory(int r);
	std::string aFactory1(int r);
	std::string aFactory2(int r);
	std::string aFactory3(int r);
	std::string aFactory4(int r);
	void OnButton1(wxCommandEvent& evt);
	void OnButton2(wxCommandEvent& evt);
	void OnButton3(wxCommandEvent& evt);
	void OnButton4(wxCommandEvent& evt);




	wxDECLARE_EVENT_TABLE();
};

